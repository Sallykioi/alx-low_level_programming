#include "main.h"
/**
 * print_square - A function that prints square
 * @size: Size of square
 *
 * Return:0
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i,j;
		for (i = 0 ; i = size ; i++)
			_putchar('#');
		for (j = 0 ; j = size ; j++)
			_putchar('#');
		_putchar('\n');
	}
}
		
