#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The destination value
 * @src: The source value
 * @n: The limit of the concatenation
 *
 * Return: A pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0, k = 0;

	while (dest[length])
	{
		length++;
	}

	while (k < n && src[k])
	{
		dest[length] = src[k];
		length++;
		k++;
	}

	dest[length + n + 1] = '\0';

	return (dest);
}
