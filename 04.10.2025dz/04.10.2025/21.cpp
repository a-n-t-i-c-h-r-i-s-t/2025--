#include<cstdio>

int main(int argc, char** argv)
{
	int v = 0;
	int t = 0;

	scanf_s("%d", &v);
	scanf_s("%d", &t);

	int s = v * t;


	if (s < 0)
	{
		s = -s;

		printf("%d", 109 - ((s - 1) % 109));
	}
	else
	{
		printf("%d", (s + 1) % 109);
	}
	return 0;
}