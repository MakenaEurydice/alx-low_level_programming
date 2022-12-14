#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Description - Make alphabet x10 times
 *
 * Return - void
 */
void print_alphabet_x10(void)
{
	char a;
	int j = 0;

	while (j <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a)
		}

		_putchar('\n');

		j++;
	}
}
