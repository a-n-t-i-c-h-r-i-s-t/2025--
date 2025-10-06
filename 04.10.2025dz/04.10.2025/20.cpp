#include<cstdio>

int main(int argc, char** argv)
{
	int n = 0;
	int k = 0;
	int p = 0;
	int s = 0;
	int z = 0;

	scanf_s("%d", &n);
	scanf_s("%d", &k);

	p = k % n;
	s = (k - p) / n;

	printf("%d", s);
	printf(" ");
	printf("%d", p);
	printf(" ");


	if (p > 0)
	{
		z = n - p;
	}
	else
	{
		z = 0;
	}

	printf("%d", z);
	return 0;
}