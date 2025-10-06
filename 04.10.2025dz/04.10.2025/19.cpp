#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int x = 0;
	int y = 0;


	scanf_s("%d", &a);
	scanf_s("%d", &b);
	x = b % a;
	y = a % b;



	if ((x != 0) && (y != 0)) {
		printf("666");
	}
	else {
		printf("1");
	}

	return 0;
}