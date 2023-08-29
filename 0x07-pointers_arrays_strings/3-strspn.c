#include "main.h"
/**
 * _strspn -  function that gets the length of a prefix substring
 *@s: String segment
 *@accept: String
 *Return: Number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j,  result;

	result = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (accept[j] == s[i])
			{
				result++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (result);
}
