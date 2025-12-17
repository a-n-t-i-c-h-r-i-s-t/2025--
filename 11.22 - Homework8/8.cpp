#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(int argc, char** argv)
{
	char g[1000];
	scanf("%s", g);

	int x = strlen(g);

	for (int i = 0; i < x; i++)
	{
		int a = 0;

		for (int j = 0; j < x; j++)
		{
			if (g[i] == g[j])
			{
				a++;
			}
		}
		if (a == 2)
		{
			printf("%c", g[i]);

			break;
		}
	}
	return 0;
}
