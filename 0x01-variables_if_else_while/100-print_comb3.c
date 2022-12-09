#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two digits.
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	a = 0;

	while (a < 100)
	{
		b = a % 10; /* singles digit */
		c = a / 10; /* doubles digit */

		if (c < b)
		{
			putchar(c + '0');
			putchar(b + '0');

			if (a < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');

	return (0);
}
			
