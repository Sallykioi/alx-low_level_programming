#include "main.h"
#include <string.h>
/**
 * _strncat - A function that concatenates two strings.
 * @dest: Destination string
 * @src: Source string
 * @n: Number od byte to concatenate
 *
 * Return: Destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[length + i] = *src;
		src++;
	}
	dest[length + i] = '\0';
	return (dest);

}
