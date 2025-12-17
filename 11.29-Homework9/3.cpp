#include<stdio.h>
#include<math.h>

struct Point
{
	int x;
	int y;
};

int main(int argc, char** argv)
{
	int a = 0;
	scanf_s("%d", &a);

	struct Point g[100];

	for (int i = 0; i < a; i++)
	{
		scanf_s("%d %d", &g[i].x, &g[i].y);
	}

	double max = 0.0;

	for (int i = 0; i < a; i++)
	{
		for (int j = i + 1; j < a; j++)
		{
			double dx = g[i].x - g[j].x;
			double dy = g[i].y - g[j].y;
			double dst = sqrt(dx * dx + dy * dy);
			if (max < dst)
			{
				max = dst;
			}
		}
	}
	printf("%.15g", max);
	return 0;
}