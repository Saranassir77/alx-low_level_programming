#include "main.h"

/**
 * checker - checks if integer is the square root of a number
 * @n: num n
 * @i: int
 * Return: int
 */
int checker(int n, int i)
{
	if (n == i * i)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (checker(n, i + 1));
}
/**
 * _sqrt_recursion - returns an int
 * @n: num
 * Return: num
 */
int _sqrt_recursion(int n)
{
	return (checker(n, 1));
}
