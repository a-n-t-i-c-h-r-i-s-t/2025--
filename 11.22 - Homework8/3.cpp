#include<stdio.h>
#include <stdbool.h>
#include<string.h>

unsigned char changereg(unsigned char c);
unsigned char changereg(unsigned char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return c - ('a' - 'A');
	}
	if (c >= 'A' && c <= 'Z')
	{
		return c - ('A' - 'a');
	}
	return c;
}

int main(int argc, char** argv)
{
	unsigned char c;
	scanf_s("%c", &c);

	unsigned char g = changereg(c);
	printf("%c", g);
	return 0;
}

