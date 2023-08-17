#include "main.h"
#include <stdio.h>
/**
 *print_to_98 -Function that prints all natural numbers from n to 98
 *@n: Checking value
 * Return: 0
 */
void times_table(int n)
{

	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}

