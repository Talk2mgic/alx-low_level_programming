#include <stdio.h>

/**
 * main - prime factor of numbers 612852475143
 * Return: Always 0
 */
int main(void)
{
	long pri = 612852475143, div;

	while (div < (pri / 2))
	{
		if ((pri % 2) == 0)
		{
			pri /= 2;
			continue;
		}
		for (div = 3; div < (pri / 2); div += 2)
		{
			if ((pri % div) == 0)
			{
				pri /= div;
			}
		}
	}
	printf("%d\n", pri);

	return (0);
}
