#include "main.h"
/**
 * islower - Checks lowecase charaacters
 *@c: checking parameter
 * Description: Function that checks lowercase characters
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
