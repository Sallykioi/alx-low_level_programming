#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src, including the
 *  (\0), to the buffer pointed to by dest
 *  @dest: Destination parameter
 *  @src: Source parameter
 *
 *  Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;


	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
