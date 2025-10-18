#include<cstdio>

int main(int argc, char** argv)
{
	int x = 0;
	int d = 100000;
	int c = 0;
	int k = 0;
	do
	{
	scanf_s("%d", &x);

	
	if (d == x)
	{
		c = c + 1;
	}
	else if (d != x)
	{
		c = 0;
	}
	d = x;

	printf("");

	if (c > k)
	{
		k = c;
	}

	} while (x != 0);

	printf("%d", k + 1);

	
	return 0;
}