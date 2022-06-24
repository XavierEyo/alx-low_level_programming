#include <stdio.h>

/**
 * main - prints the program name followed by a new line
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the argument
 *
 * Return: Always 0
 */
int main(int _attribute_((_unused_)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
