#include<stdio.h>
#include <stdbool.h>
#include<string.h>

unsigned char ToUpper(unsigned char c);
unsigned char ToUpper(unsigned char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return c - ('a' - 'A');
	}
	return c;
}

int main(int argc, char** argv)
{
	unsigned char c;
	scanf_s("%c", &c);

	unsigned char g = ToUpper(c);
	printf("%c", g);
	return 0;
}

