#include <stdio.h>
/**
 * main - A program that prints alphabets in lower and uppercase
 * Description -A program that uses putchar command to print alphabets
 * Return: Comment
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar (i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar (i);
	putchar ('\n');
	return (0);
}
