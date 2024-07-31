#include <stdarg.h>
#include <stddef.h>
#include "main.h"

/**
 * _assignint - Sends an integer to stdout
 * @j: The integer to be printed
 *
 * Return: Number of characters to be written
 */
int _assignint(int j)
{
	int count_variable = 0;
	unsigned int number;

	if (n < 0)
	{
		count_variable += _putchar('-');
		number = -j;
	}
	else
		number = j;

	if (number / 10)
		count_variable += _assignint(number / 10);
	count += _putchar((number % 10) + '0');

	return (count_variable);
}

/**
 * _printf - Main printf function
 * @format: This is the format string
 *
 * Return: This returns the number of characters to be printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int d;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'd':
				case 'i':
					d = va_arg(args, int);
					i += _assignint(d);
					break;
				case '%':
					i += _putchar('%');
					break;
				default:
					a += _putchar('%');
					a += _putchar(*format);
					break;
			}
		}
		else
			i += _putchar(*format);
		format++;
	}

	va_end(args);

	return (i);
}
