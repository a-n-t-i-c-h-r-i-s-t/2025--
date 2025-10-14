#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	

	if (a != b != c != 0)
	{

		if (a == 0)
		{
			printf("");
		}
		else
		{
			printf("%d", a);
		}

		if (b == 0)
		{
			printf("");
		}
		else if (b == 1)
		{
			printf("+x");
		}
		else if (b == -1)
		{
			printf("-x");
		}
		else if ((b < 0) && (b != -1))
		{
			printf("%d", b);
			printf("x");
		}
		else if ((a == 0) && (b > 0))
		{
			printf("%d", b);
			printf("x");
		}
		else
		{
			printf("+");
			printf("%d", b);
			printf("x");
		}

		if (c == 0)
		{
			printf("");
		}
		else if (c == 1)
		{
			if ((a == 0) && (b == 0) && (c > 0))
			{
				printf("y");
			}
			else if ((a != 0) && (b == 0) && (c > 0))
			{
				printf("+y");
			}
			else
			{
				printf("+y");
			}
			
		}
		else if (c == -1)
		{
			printf("-y");
		}
		else if ((c < 0) && (c != -1))
		{
			printf("%d", c);
			printf("y");
		}
		else if ((a == 0) && (b == 0) && (c > 0))
		{
			printf("%d", c);
			printf("y");
		}
		else if ((a != 0) && (b == 0) && (c > 0))
		{
			printf("+");
			printf("%d", c);
			printf("y");
		}
		else
		{
			printf("+");
			printf("%d", c);
			printf("y");
		}
		

	}
	else
	{
		printf("0");
	}



	return 0;
}