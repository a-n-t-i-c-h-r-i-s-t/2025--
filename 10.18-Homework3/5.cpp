#include<cstdio>

int main(int argc, char** argv)
{
	int x = 0;
	int d = 0;
	int k = 0;
	do
	{
		scanf_s("%d", &x);
		
		

		if (d < x)
		{
			k = d;
			d = x;	
		}
		else if (d > x)
		{
			d = d;
		}
		else if (d == x)
		{
			d = x;
		}
 


	} while (x != 0);

	
	printf("%d", k);

	return 0;
}