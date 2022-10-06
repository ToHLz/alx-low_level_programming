#include "main.h"

/**
 * *_memcpy - copies memory area from src to dest
 * @dest: The destination of the program
 * @src: the source of the program
 * @n: the maximum bytes to be used
 *
 * Return: The destination is returned
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 ; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
