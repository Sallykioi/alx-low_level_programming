#include "main.h"
/**
 * puts_half - A function that prints half a string
 * @str: String parameter to b half printed
 *
 * Return: Void
 */
void puts_half(char *str)
{
	int i;
	int n;
	int count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	n = (count - 1) / 2;
	for (i = n + 1 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
