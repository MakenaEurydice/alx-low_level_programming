#include "main.h"

/**
 * _isalpha: checks for alphabetic character
 * @c: The character to be checked
 * Description:  checks for alphabetic character
 * 
 * Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
