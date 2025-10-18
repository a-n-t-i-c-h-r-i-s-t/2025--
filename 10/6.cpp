#include<cstdio>

int main(int argc, char** argv)
{
	int x = 0;
	int d = 0;
	int c = 0;
	int k = 0;
	int z = 0;

	scanf_s("%d", &x);
	
	for (d = 0; d != x; d++)
	{
		scanf_s("%d", &c);
		
		if (c > 0)
		{
			k = k + 1;
			if (k > z)
			{
				z = k;
			}
		}
		else
		{
			k = 0;
		}
	}
	
	printf("%d", z);

	return 0;
}