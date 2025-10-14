#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	scanf_s("%d", &a);

	b = ((((a % 1000) - (a % 100)) / 100) + (((a % 100) - (a % 10)) / 10) + (a % 10));
	c = ((a - (a % 1000)) / 1000);
	d = ((((c % 1000) - (c % 100)) / 100) + (((c % 100) - (c % 10)) / 10) + (c % 10));

	if (b == d)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}