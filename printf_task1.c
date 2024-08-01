#include <stdarg.h>
#include <stddef.h>
#include "main.h"

/**
 * _assignint - Sends an integer to stdout
 * @j: The integer to be printed
 *
 * Return: The number of characters to be written
 */
int _assignint(int j)
{
	int count_variable = 0;
	unsigned int number;

	if (j < 0)
	{
		count_variable += _putchar('-');
		number = -j;
	}
	else
		number = j;

	if (number / 10)
		count_variable += _assignint(number / 10);
	count_variable += _putchar((number % 10) + '0');

	return (count_variable);
}
