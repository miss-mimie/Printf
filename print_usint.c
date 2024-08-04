#include "main.h"

/**
 * print_usint - Prints unsigned int
 * @u: Unsigned int to print
 *
 * Return: Number of character printed
 */
int print_usint(unsigned int u)
{
	int count_variable = 0;
	char buffer_size[11];
	char *pointer = buffer_size;

	if (u == 0)
	{
		_putchar('0');
		return (1);
	}

	while (u > 0)
	{
		*pointer++ = (u % 10) + '0';
		u /= 10;
		count_variable++;
	}

	while (pointer > buffer_size)
		_putchar(*--pointer);

	return (count_variable);
}
