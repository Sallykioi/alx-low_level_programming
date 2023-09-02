#include "main.h"
/**
 * _islower - Entry point
 *
 * Description: Function that checks lowercase characters
 *@c: Checking the function
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
