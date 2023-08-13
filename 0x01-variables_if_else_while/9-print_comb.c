#include <stdio.h>
/**
 * main - Entry Function
 *
 * Description: A program that  displays conmbinations of numbers
 *
 * Return: Comment
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)

	{
		if (i == 9)
			putchar(i + '0');
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
