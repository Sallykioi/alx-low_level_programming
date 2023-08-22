#include <stdio.h>
#include "main.h"
/**
 * print_array - A function that prints n elements of an array of integers
 *@a:Integer 1
 *@n:Interger 2
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
