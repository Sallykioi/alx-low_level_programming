#include <stdio.h>
/**
 * main - A program that print alphabets excluding q and e
 * Description - A program that prints alphabets in lowercase excluding q and e
 * Return: Comment
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar (i);
	return (0);
}
