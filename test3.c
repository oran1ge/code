#include<stdio.h>
int i;
long Fib(unsigned int n)
{
	
	i++;
	if (n == 1 || n == 2)
			return 1;
	else
			return Fib(n - 1) + Fib(n - 2);
	
}
int main(void)
{
	int n;
	long ret;
	printf("please input n:");
	scanf("%d", &n);
	ret = Fib(n);
	printf("Fib(n)=%d i=%d\n", ret,i);
	


	return 0;
}

