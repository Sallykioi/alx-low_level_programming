#include <stdio.h>
/**
 * main - Entry Function
 *
 * Description: A program that prints numbers of base 16 followed by a new line
 *
 * Return: Comment
 */
int main(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}

