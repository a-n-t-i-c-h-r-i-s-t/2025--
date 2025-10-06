#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;


	scanf_s("%d", &a);


	printf("%d", (((a % 1000) - (a % 100)) / 100) + (((a % 100) - (a % 10)) / 10) + (a % 10));
	return 0;
}