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
	int i = 0;

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
				case 'c':
					c = (char) va_arg(args, int);
					i += _putchar(c);
					break;
					case 's':
					s = vs_arg(args, const char *);
					if (s == NULL)
						s = "(null");
					i += _puts(s);
					break;
					case '%':
					i += _putchar('%');
					break;
			}
		}
		else
		{
			i += _putchar(*format);
		}
		format++;
	}

	va_end(args);
	return (i);
}












