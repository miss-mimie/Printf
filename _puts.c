#include "main.h"

/**
 * _puts - this writes the string to the standard output
 * @str: This is the string to be printed
 *
 * Return: Number of characters printed (excluding the null byte)
 */
int _puts(const char *str)
{
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str++);
		i++;
	}

	return (i);
}
