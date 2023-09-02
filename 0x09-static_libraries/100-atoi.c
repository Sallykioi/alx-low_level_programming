#include "main.h"
/**
 * _atoi - A function that convert a string to an integer
 * @s: String to be converted into integer
 *
 * Return: Always 0
 */
int _atoi(char *s)
{
	int i;
	int sign = 1;
	int result = 0;
	char start = 0;

	if (s == NULL)
	{
		return (0);
	}
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result *  10 + (s[i] - '0');
			start = 1;
		}
		else if (start)
		{
			break;
		}
	}
	return (result * sign);
}
