#include "main.h"
/**
 * _puts - Function that prints a string followed by a new line
 * @str:String to be printed
 *
 * Return: Void
 */
void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
