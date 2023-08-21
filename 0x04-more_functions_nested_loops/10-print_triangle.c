#include "main.h"
/**
 * print_triangle - A function that prints triangles followed by a new line
 * @size: Size of triangel to be printed
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1 ; i <= (size) ; i++)
		{
			for (j = (size) - i ; j >= 1 ; j--)
			{
				_putchar(' ');
			}
			for (hash = 1 ; hash <= i ; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
