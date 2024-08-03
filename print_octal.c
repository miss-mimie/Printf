#include "main.h"

/**
 * print_octal - Prints unsiged int as octal
 * @o: Unsigned int to print
 *
 * Return: Number of characters to be printed
 */
int print_octal(unsigned int o)
{
	int count_variable = 0;
	char buffer_size[11];
	char *pointer = buffer;

	if (o == 0)
	{
		_putchar('0');
		return (1);
	}

	while (o > 0)
	{
		*pointer++ = (o % 8) + '0';
		o /= 8;
		count_variable++;
	}

	while (pointer > buffer)
		_putchar(*--pointer);

	return (count);
}
