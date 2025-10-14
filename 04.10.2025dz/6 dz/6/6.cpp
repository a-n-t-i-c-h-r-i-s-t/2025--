#include<cstdio>
#include<cmath>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	int d = ((b * b) - 4 * a * c);
	int k = sqrt(d);

	if (d > 0)
	{
		
		int x1 = ((-b - k) / (2 * a));
		int x2 = ((-b + k) / (2 * a));
		int y1 = ((-b - k) % (2 * a));
		int y2 = ((-b + k) % (2 * a));

		printf("2");

		printf("\n" "%d", x1);
		printf(".");
		printf("%d", y1);

		printf("\n" "%d", x2);
		printf(".");
		printf("%d", y2);
	}
	else if (d == 0)
	{
		int x3 = ((-b) / (2 * a));
		int y3 = ((-b) % (2 * a));

		printf("1");

		printf("\n" "%d", x3);
		printf(".");
		printf("%d", y3);
	}
	else if (d < 0)
	{
		printf("0");
	}
	else if (a == b == c == 0)
	{
		printf("-1");
	}
	else if ((a == 0) && (b != 0) && (c != 0))
	{
		int x4 = ((-c) / b);
		int y4 = ((-c) % b);

		printf("1");

		printf("\n" "%d", x4);
		printf(".");
		printf("%d", y4);

	}


	return 0;
}