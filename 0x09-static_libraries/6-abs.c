#include "main.h"
/**
 * _abs - Function that finds the absolute value of an integer
 *
 *@i: checking function parameter
 *
 * Return: -0
 */
int _abs(int i)
{
	if (i < 0)
		return (-i);
	else if (i >= 0)
	{
		return (i);
	}
	_putchar('\n');
	return (0);
}
