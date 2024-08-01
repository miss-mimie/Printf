#include <stdarg.h>
#include <stddef.h>
#include "main.h"

/**
 * print_integer - Sends an integer to stdout
 * @j: The integer to be printed
 *
 * Return: The number of characters to be written
 */
int print_integer(int j)
{
	int count_variable = 0, negative = 0;
	char buffer_size[12];
	char *pointer = buffer_size;

	if (j < 0)
	{
		negative = 1;
		j = -j;
	}
	do {
		*pointer++ = (j % 10) + '0';
		j /= 10;
		count_variable++;
	} while (j > 0);

	if (negative)
	{
		*pointer++ = '-';
		count_variable++;
	}

	while (pointer != buffer_size)
	{
		pointer--;
		_putchar(*pointer);
	}

	return (count_variable);
}
