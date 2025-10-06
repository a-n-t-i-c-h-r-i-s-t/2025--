#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;

	scanf_s("%d", &a);

	b = a / 10;

	if (a % 10 > 0)
	{
		b = b + 1;
	}
	printf("%d", b);
	return 0;
}