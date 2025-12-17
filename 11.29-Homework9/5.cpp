#include<stdio.h>

struct Student
{
	char a[50];
	char b[50];
	int math;
	int psych;
	int inf;
};
int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);

	struct Student g[100];
	double x = 0;
	double y = 0;
	double z = 0;

	for (int i = 0; i < n; i++)
	{
		scanf_s("%s %s %d %d %d", g[i].a, (unsigned)sizeof(g[i].a), g[i].b, (unsigned)sizeof(g[i].b), &g[i].math, &g[i].psych, &g[i].inf);

		x += g[i].math;
		y += g[i].psych;
		z += g[i].inf;
	}

	double h = x / n;
	double q = y / n;
	double p = z / n;

	printf("%g %g %g", h, q, p);

	return 0;
}