#include<cstdio>

int main(int argc, char** argv)
{
	double x = 0;
	int y = 0;
	int c = 1;
	int z = 0;

	scanf_s("%d", &z);
	scanf_s("%d", &y);

	x = z;

	while ((y - x) > 0)
	{
		
		x = x + x*15/100;
		c = c + 1;

		
	
	}


	printf("%d", c);
	

	return 0;
}