#include "main.h"
#include <unistd.h>

/**
 * _printf - This prints the main function
 * @format: The format string 
 *
 * Return: number of character printed(exc. NULL byte)
 */

int _printf(const char *format, ...)
{
	va_list args;
	int _putchar = 0;
	
	va_start(args, format);

	while (*format)
	{
		if (*format = '%')
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
				case 's':
					_putchar += _print_str(va_arg(args, char *));
					break;
					_putchar += write(1, "%", 1);
			}
			format++;
		}
	}

	va_end(args);

	return (0);
}
