#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes lowercase to uppercase
 * @n: pointer
 * Return: char
 */
char *string_toupper(char *n)
{
	int x;

	x = 0;
	while (n[x] != '\n')
	{
		if (n[x] >= 'a' && n[x] <= 'z')
			n[x] = n[x] - 32;
		x++;
	}
	return (n);

}

