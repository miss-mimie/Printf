#include "main.h"

/**
 * print_bin - Prints unsigned int as binary
 * @b: The unsigned int to print
 *
 * Return: The number of characters printed
 */
int print_bin(unsigned int b)
{
	int count_variable = 0, head_zeros = 1;
	unsigned int container = 1 << ((sizeof(b) * 8) - 1);

	while (container > 0)
	{
		if (b & container)
		{
			_putchar('1');
			count_variable++;
			head_zeros = 0;
		}
		else if (!head_zeros)
		{
			_putchar('0');
			count_variable++;
		}
		container >>= 1;
	}

	if (count_variable == 0)
	{
		_putchar('0');
		count_variable++;
	}

	return (count_variable);
}
