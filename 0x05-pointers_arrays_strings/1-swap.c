#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 * @a: parameter one pointing to first integer
 * @b: parameter two pointing to the second intneger
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
