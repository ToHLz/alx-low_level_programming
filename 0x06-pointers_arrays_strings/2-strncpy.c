#include "main.h"

/**
 * *_strncpy - Copy a string
 * @dest: The destination value
 * @src: The source value
 * @n: The copy limit
 *
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b = 0, c = 0;

	while (src[b++])
	{
		c++;
	}

	for (b = 0; src[b] && b < n; b++)
		dest[b] = src[b];

	for (b = c; b < n; b++)
		dest[b] = '\0';
	return (dest);
}
