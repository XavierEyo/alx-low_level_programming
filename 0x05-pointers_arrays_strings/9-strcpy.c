#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 * terminating null byte, to a buffer pointed to by @dest.
 * @dest: Buffer to copy the string to.
 * @src: source string to copy
 *
 * Return: pointer to the destination @dest
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;
	
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
