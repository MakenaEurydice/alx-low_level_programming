#include "main.h"

/**
 * _abs - asolute value of integer
 * Description: a function that computes the absolute value of an integer
 * @c: The integer passed
 *
 * Return: Absolute value of number or zero
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
