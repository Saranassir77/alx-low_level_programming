#include "main.h"

/**
 * _pow_recursion - returns value of int x raised to the power of int y
 * @x: int x
 * @y: int y
 * Return: x & y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

