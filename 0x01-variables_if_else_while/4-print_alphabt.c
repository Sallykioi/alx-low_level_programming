#include <stdio.h>
/**
 * main - A program that print alphabets excluding e & q
 *
 * Description - A program that prints alphabets in lowercase excluding q and e
 *
 * Return: Comment
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar (i);
	putchar ('\n');
	return (0);
}
