#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>


int main(int argc, char** argv)
{
	char g[1000];
	scanf("%[^\n]", g);

	int a = 0;
	int b = 0;

	for (int i = 0; g[i] != '\0'; i++)
	{
		if (g[i] != ' ')
		{
			if (!b)
			{
				a++;
				b = 1;
			}
		}
		else
		{
			b = 0;
		}
	}

	printf("%d", a);


	return 0;
}