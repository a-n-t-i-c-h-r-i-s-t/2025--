#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(int argc, char** argv)
{
	char g[1000];
	scanf("%s", g);

	int s = strlen(g);

	bool isPalindrome = true;

	for (int i = 0; i < s / 2; i++)
	{
		if (g[i] != g[s - 1 - i])
		{
			isPalindrome = false;
			break;
		}
	}


	if (isPalindrome)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}


	return 0;
}