#include "main.h"
/**
 *  sqrt_a - Returns the square root of a number
 *  @i: Input number
 *  @j: Iterator
 *  Return: -1 or square root
 */
int sqrt_a(int i, int j)
{
	if (j * j == i)
	{
		return (j);
	}
	else if (j * j > i)
	{
		return (-1);
	}
	return (sqrt_a(i, j + 1));
}


#include "main.h"
/**
 *  _sqrt_recursion - Returns the square root of a numbe
 *  @n: Input number
 *
 *  Return: Square root or -1
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
