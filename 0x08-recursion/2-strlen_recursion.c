#include "main.h"
/**
 * _strlen_recursion -  function that returns the length of a string
 * @s: String
 *
 *Return: Always 0
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
