#include<stdio.h>
#include<math.h>

struct Point
{
	int x;
	int y;
};

double dist(struct Point a, struct Point b);

int tring(struct Point a, struct Point b, struct Point c);


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
			for (int u = j + 1; u < a; u++)
			{
				if (tring(g[i], g[j], g[u]))
				{
					double a = dist(g[i], g[j]);
					double b = dist(g[j], g[u]);
					double c = dist(g[u], g[i]);

					double perc = a + b + c;

					if (perc > max)
					{
						max = perc;
					}
				}
			}
		}
	}
	printf("%.15g", max);
	return 0;
}

double dist(struct Point a, struct Point b)
{
	double dx = a.x - b.x;
	double dy = a.y - b.y;
	return sqrt(dx * dx + dy * dy);
}

int tring(struct Point a, struct Point b, struct Point c)
{
	double ar = (b.x - a.x) * (c.y - a.y) - (c.x - a.x) * (b.y - a.y);
	return fabs(ar) > 0;
}
