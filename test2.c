#include<stdio.h>
long  Found(unsigned int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return(Found(n - 1) + Found(n - 2));

}
int main(void)
{
	int n;
	do
	{
		printf("请确认几项数列");
		scanf("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			printf("Found(%d)=%d\n", i, Found(i));
		}

	} while (n<=0);
	return 0;
}
