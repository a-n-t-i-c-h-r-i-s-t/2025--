#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 1;
	int v = 0;
	int k = 1;
	int z = 0;

	scanf_s("%d", &a);

	if ((a == 0) || (a == 1))
	{
		printf("%d", a);
	}
	else
	{
		while (b != a)
		{
			z = v + k;


			if (v < k)
			{
				v = z;
			}
			else if (k < v)
			{
				k = z;
			}
			else if (k == v)
			{
				v = z;
			}
			
			b = b + 1;
		}

		printf("%d", z);
	}

	return 0;
}