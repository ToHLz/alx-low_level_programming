#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - The function that will a string following a newline
 * *s: The string that will be printed
 *
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	printf("%c", *s);
	_puts_recursion(*s + 1);
}
