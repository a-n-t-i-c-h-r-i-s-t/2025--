#include<stdio.h>

struct Point
{
	int x;
	int y;
};

int main(int argc, char** argv)

{
	int g = 0;

	scanf_s("%d", &g);

	struct Point qt[100];

	double smthx = 0.0, smthy = 0.0;

	for (int i = 0; i < g; i++)
	{
		scanf_s("%d %d", &qt[i].x, &qt[i].y);

		smthx += qt[i].x;
		smthy += qt[i].y;
	}
	double centrx = smthx / g;
	double centry = smthy / g;

	printf("%.15g %.15g", centrx, centry);

	return 0;
}