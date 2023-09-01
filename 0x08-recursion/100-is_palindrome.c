#include "main.h"
/**
 * _strlen_recursion - Function that gets the string length
 * @s: String
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_string - compare each character of the string
 * @s: String
 * @left: Smallest iterator
 * @right: Largest iterator
 *
 * Return: int
 */
int compare_string(char *s, int left, int right)
{
	if (left >= right)
		return (1);
	if (s[left] == s[right])
		return (compare_string(s, left + 1, right - 1));
	return (0);
}

/**
 *  is_palindrome - function that detects whether string is palindrome
 *   @s: String
 *   Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
