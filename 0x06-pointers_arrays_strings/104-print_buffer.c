#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer 10 bytes at a time, starting with the byte position,
 * then showing the hex content and displaying printable characters.
 * @b: buffer to be printed.
 * @size: number of bytes to be printed from the buffer
 */
void print_buffer(char *b, int size)
{
	int j, k, l;

	if (size <= 0)
		printf("\n");
	else
	{
		for (j = 0; j < size; j+= 10)
		{
			printf("%0.8x:", j);
			for (k = j; k < j + 10; k++)
			{
				if (k % 2 == 0)
					printf(" ");
				if (k < size)
					printf("%.2x", *(b + k));
				else
					printf(" ");
			}
			printf(" ");
			for (l = j; l < j + 10; l++)
			{
				if (l >= size)
					break;
				if (*(b + 1) < 32 || *(b + l) > 126)
					printf("%c", *(b + 1));
			}
			printf("\n");
		}
	}
}
		
