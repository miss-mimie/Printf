#include "main.h"

/**
 * print_hexadec - Prints an unsigned int as hex
 * @h: Unsigned int to print
 * @upper: To be printed in uppercase or lower
 *
 *
 * Return: Number of characters printed
 */
int print_hexadec(unsigned int h, int upper)
{
	int count_variable = 0;
	char buffer_size[9];
	char *pointer = buffer;
	char digits[] = "0123456789abcdef";

	if (upper)
		digits = "0123456789ABCDEF";
	if (h == 0)
	{
		_putchar('0');
		return (1);
	}

	while (h > 0)
	{
		*pointer++ = digits[h % 16];
		h /= 16;
		count_variable++;
	}
	while (pointer > buffer_size)
		_putchar(*--pointer);

	return (count_variable);
}
