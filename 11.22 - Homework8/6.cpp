#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdbool.h>
#include<string.h>



int main(int argc, char** argv)
{
	char g[1000];

	scanf("%[^\n]", g);

	int m = 0;
	int k = 0;
	int n = 0;
	int e = 0;

	int i;

	for (i = 0; g[i] != '\0'; i++)
	{
		if (g[i] != ' ')
		{
			k++;
			if (k == 1)
			{
				n = i;
			}
		}
		else
		{
			if (k > m)
			{
				m = k;
				e = n;
			}
			k = 0;
		}
	}
	if (k > m)
	{
		m = k;
		e = n;
	}
	for (i = e; i < e + m; i++)
	{

		printf("%c", g[i]);

	}

	printf("\n%d", m);


	return 0;
}