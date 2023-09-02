#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s:Parameter checking length of string
 *
 * Return:Length of the string
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}
