#include "main.h"
/**
 *_isdigit - A function that checks for a digit from 0 to 9
 *@c:Parameter 1
 *
 * Return:1 if c is a digit 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
