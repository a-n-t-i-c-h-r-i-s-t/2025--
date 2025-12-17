#include<stdio.h>
#include <stdbool.h>
#include<string.h>


bool IsDigit( unsigned char c);

bool IsDigit(unsigned char c)
{
	return (c >= '0' && c <= '9');
}

int main(int argc, char** argv)
{
	unsigned char c;
	scanf_s("%c", &c);

	if (IsDigit(c))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
