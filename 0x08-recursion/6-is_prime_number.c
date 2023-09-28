#include "main.h"

/**
 * compare - compare between l and n
 * @n: num
 * @l: int
 * Return: 1 or 0
 */
int compares(int n, int l)
{
	if (n == l)
		return (1);

	else if (n % l == 0)
		return (0);

	return (compares(n, l + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is prime number
 * @n: num
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (compare(n, 2));
}
