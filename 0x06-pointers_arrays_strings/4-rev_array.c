#include "main.h"
/**
 * reverse_array -  A function that reverses the content of an array of integers
 * @a: Integer 1
 * @n: Number of elements of the array
 *
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0 ; i < n ; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
