#include "main.h"

/**
 * more_numbers - prints 0 to 9 ten times
 * Return: Always 0
 */
void more_numbers(void)
{
	int num, m;

	for (m = 0; m <= 9; m++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (mum > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}

		_putchar('\n');
	}
}