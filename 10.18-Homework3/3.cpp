#include<cstdio>

int main(int argc, char** argv)
{
	int x = 0;
	int y = 0;
	int d = 1;


	scanf_s("%d", &x);
	scanf_s("%d", &y);

	while (((d % x) != 0) || ((d % y) != 0))
	{
		d = d + 1;
	}

	printf("%d", d);

	return 0;
}