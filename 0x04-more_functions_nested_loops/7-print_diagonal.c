#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: numbers of '\' to be printed
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');

	for (a = o; a < b; a++)
	{
		for (b = 0; b < a; b++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
