#include "main.h"

/**
 * swap_int - swaps the values of two int
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int u;

	u = *a;
	*a =*b;
	*b = u;
}
