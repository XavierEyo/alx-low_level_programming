#include <stdio.h>

/**
 * main - prints largest prime factor
 * Return: Always 0
 */

int main(void)
{
	long int n, pf;

	n = 612852475143;
	for(pf = 2; pf <= n; pf++)
	{
		while(n % pf == 0)
		{
			printf("%d ", pf);
			n = n / pf;
		}
		printf("\n");
	}
	return (0);
}
