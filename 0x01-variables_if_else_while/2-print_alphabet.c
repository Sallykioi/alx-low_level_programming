#include <stdio.h>
/**
 * Main - A program that displays alphabets using putchar
 * Description - A program that prints alphabets in lower case
 * Return: Comment
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	putchar(i);
	putchar('\n');
	return (0);
}
