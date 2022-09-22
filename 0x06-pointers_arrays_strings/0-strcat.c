#include "main.h"

/**
 * *_strcat - The function that prints out the conactenation of strings
 * @dest: First parameter
 * @src: second parameter
 *
 * Return: Concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[length] = src[j];
		length++;
	}
	dest[length] = '\0';

	return (dest);
}
