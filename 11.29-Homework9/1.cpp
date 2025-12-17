#include<stdio.h>

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
	int max = 0;
	long long xd = 0;

	for (int i = 0; i < a; i++)
	{
		scanf_s("%d %d", &g[i].x, &g[i].y);

		long long ds = (long long)g[i].x * g[i].x + (long long)g[i].y * g[i].y;

		if (ds > xd)
		{
			xd = ds;
			max = i;
		}
	}

	printf("%d %d", g[max].x, g[max].y);

	return 0;
}