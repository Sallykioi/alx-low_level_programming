#include <stdio.h>
#include "main.h"
/**
 * main  -  A function that prints positive and negative numbers
 *@i: Checking parameter
 *Description: A program that prints numbers either positive or negative
 *
 * Return: Comment
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is 0\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
	return (0);
}
