#include <stdio.h>

/**
 * main - print fibonacci
 *
 * Return: Always 0
 */
int main(void)
{
	int count = 98, a = 1, b = 2, c, i;

	for (i = 1; i < count; i++)
	{
		if (i <= 1)
			c = i;
		else
		{
			a++;
			c = a + b;
			a = b;
			b = c;
		}
		printf("%d\n", c);
	}

	return 0;
}
