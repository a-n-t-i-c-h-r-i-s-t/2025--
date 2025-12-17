#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool Compare(char a[], char b[]);
bool Compare(char a[], char b[])
{
	int i = 0;
	while (a[i] != '\0' && b[i] != '\0')
	{
		if (a[i] != b[i])
		{
			return false;
		}
		i++;
	}
	return (a[i] == '\0' && b[i] == '\0');
}

int main(int argc, char** argv)
{
	char r[100];
	char f[100];

	scanf_s("%99[^\n]", r, (unsigned)sizeof(r));
	getchar();
	scanf_s("%99[^\n]", f, (unsigned)sizeof(f));

	if (Compare(r, f))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
