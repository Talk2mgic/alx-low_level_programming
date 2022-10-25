#include "main.h"

/**
 * print_rev -prints a string in reverser
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\n')
		a++;
	for (a = a - 1; q >= 0; a--)
		_putchar(s[a]);

	_putchar('\n');
}
