#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised
 * to the power of y
 * @x: the integer value
 * @y: the power value
 * Return: if less than 0 return -1 and if greater return the pwr of x
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	if (y > 0)
	{
		y++;
		if (x < 0)
		{
			return (- (x * (x * y)));
		}
		if (x >= 0)
		{
			return (x * (x * y));
		}
	}
	return (1);
}
