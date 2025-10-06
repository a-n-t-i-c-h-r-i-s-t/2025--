#include<cstdio>

int main(int argc, char** argv)
{

	int K = 0;
	int N = 0;
	int a = 0;
	int c = 0;
	int s = 0;

	scanf_s("%d", &K);
	scanf_s("%d", &N);

	a = N % K;
	c = N + (K - a);
	s = c / K;

	printf("%d", s);
	printf("");
	printf("%d", a);
	return 0;
}