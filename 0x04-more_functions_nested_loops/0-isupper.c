#include "main.h"

/**
 * _isupper - check if the character is uppercase
 * @c: variable text
 * Return: Always 0
 */
int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
