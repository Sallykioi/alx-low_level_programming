#include "main.h"
/**
 * prime_a  - Function that calculate if digit is aprime number
 * @a: Input number
 * @b: Input 2
 *
 * Return: 0
 */
int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}

#include "main.h"
/**
 * is_prime_number - Calculate prime number
 * @n: Input number
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
