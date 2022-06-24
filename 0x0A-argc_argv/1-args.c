#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the argument
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
