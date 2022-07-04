#include <stdio.h>

/**
 * main - Prints the name of the file, from which the program was compiled from, followed by a newline.
 *
 * Return: Always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
