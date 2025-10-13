#include<stdio.h>
int main(void)
{
	int num, a, b, c, d, j;
	
	for (j=32; j * j <= 9999; j++)
	{
		num = j * j;
		a = num / 1000;
		b = (num / 100) % 10;
		c = (num / 10) % 10;
		d = num % 10;
		if (a == b && c == d && a != c)
		{
			printf("%d", num);
			break;
		}
	}
	
	return 0;
}
