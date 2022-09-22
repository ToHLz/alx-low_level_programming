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

	while (src[c])
	{
		c++
	}

	while (b < n && src[b])
	{
		dest[b] = src[b];
		b++;
	}

	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}
