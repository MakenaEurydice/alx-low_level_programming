#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible different combinations of 3 digits
 * Return: 0
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 1000; a++)
	{
		b = a / 100; /* hundreds */
		c = (a / 10) % 10; /* tens */
		d = a % 10; /* singles */

		if (b < c && c < d)
		{
			putchar(b + '0');
			putchar(c + '0');
			putchar(d + '0');

			if (a < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
