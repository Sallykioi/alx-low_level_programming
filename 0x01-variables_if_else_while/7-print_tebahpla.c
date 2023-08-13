#include <stdio.h>
/**
 * main - Entry Function
 *
 * Description: A program that prints lower alphabet in reverse
 *
 * Return: Comment
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar (i);
	putchar('\n');
	return (0);
}

