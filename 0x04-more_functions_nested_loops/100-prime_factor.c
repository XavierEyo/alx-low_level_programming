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
		while(n % i == 0)
		{
			printf("%d ", i);
			n = n / i;
		}
	}
	return (0);
}
