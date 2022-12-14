#include "main.h"

/**
 * print_sign - Entry point
 * @n: The number to be checked
 * Description: This function prints the sign of a number
 *
 * Return: 1 if number is positive, o if number is 0 and -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
