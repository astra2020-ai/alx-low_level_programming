#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = _strlen(s);
	i = len;

	while (i > 0)
	{
		i--;
		_putchar(*(s + i));
	}
	_putchar('\n');
}
