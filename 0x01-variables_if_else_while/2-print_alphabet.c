#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A program that prints alphabets in lowercase using putchar
 *
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
