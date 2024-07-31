#include <stdarg.h>
#include <stddef.h>
#include "main.h"

/**
 * _printf - This is the main function
 * @format: This is the format string
 *
 * Return: This returns the number of characters printed (ex. NULL byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int _putchar =0;

	va_start(args, format);

	while (*format)
	{
		if (*format)
		{
			if (*format != '%')
			{
				_putchar += write(1, format, 1);
				format++;
			}
			else
			{
				format++;
				switch (*format)
				{
					case 'c':
						_putchar += write(1, &va_arg(args, int), 1);
						break;
				}
				format++;
			}
		}
	}

	va_end(args);

	return (0);
}
