/*
 * file: 0-puts_recursion.c
 * Auth: sam
 */

#include "main.h"

/**
 * _puts_reursion - prints a string, followedby a new line.
 * @s: The string to beprinted.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
