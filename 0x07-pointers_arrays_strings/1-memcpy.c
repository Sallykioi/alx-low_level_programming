#include "main.h"
/**
 * _memcpy -  function that copies memory area
 * @dest: Destination parameter
 * @src: Source parameter
 * @n: Bytes from memory
 *
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *char_dest = (char *) dest;
	char *char_src = (char *) src;

	for (i = 0 ; i < n ; i++)
		char_dest[i] = char_src[i];
	return (dest);
}
