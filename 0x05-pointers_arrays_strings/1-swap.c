#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer to swapped.
 * @b: The second integer to be swapped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swapsthe values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
