#include<cstdio>

int main(int argc, char** argv)
{

	int c1 = 0;
	int c2 = 0;
	int c3 = 0;
	int k1 = 0;
	int k2 = 0;
	int k3 = 0;



	scanf_s("%d", &c1);
	scanf_s("%d", &c2);
	scanf_s("%d", &c3);
	scanf_s("%d", &k1);
	scanf_s("%d", &k2);
	scanf_s("%d", &k3);

	int c = (c1 * c2 * c3);
	int k = (k1 * k2 * k3);
	
	int s1 = (c1 + c2 + c3);
	int s2 = (k1 + k2 + k3);

	if ((c == k) && (s1 == s2))
	{
		printf("Boxes are equal");
	}
	else if (s1 > s2)
	{
		printf("The first box is larger than the second one");
	}
	else if (s1 < s2)
	{
		printf("The first box is smaller than the second one");
	}
	else if ((s1 == s2) && ((c > k) || (k > c)))
	{
		printf("Boxes are incomparable");
	}

	return 0;
}

