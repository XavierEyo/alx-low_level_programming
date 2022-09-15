#include <stdio.h>

/**
 * main - prints largest prime factor
 * Return: Always 0
 */

int main(void)
{
	long int n, pf;

	n = 612852475143;
	for (pf = 2; n != 1; pf++)
	{
		while (n % pf == 0)
		{
			printf("%ld ", pf);
			n = n / pf;
		}
		printf("\n");
	}
	return (0);
}
