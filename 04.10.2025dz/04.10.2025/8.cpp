#include<cstdio>

int main(int argc, char** argv)
{
	int m = 0;
	int t = 0;
	int s = 0;

	scanf_s("%d", &m);
	scanf_s("%d", &t);

	s = t / m;

	if ((s % 2) > 0)
	{
		printf("Ivan");
	}
	else
	{
		printf("Denis");
	}
	return 0;
}