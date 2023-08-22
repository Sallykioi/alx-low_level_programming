#include "main.h"
/**
 * swap_int - Function that swips the value of 2 numbers
 * @a:Value of first number
 * @b: Value of second number
 *
 * Return:Void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

