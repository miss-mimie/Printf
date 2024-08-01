#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - This is the main function
 * @format: This is the format string
 *
 * Return: This returns the number of characters printed (ex. NULL byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count_variable = 0;
	char character, *str;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;

			switch (*format)
			{
				case 'c':
					character = (char) va_arg(args, int);
					count_variable += _putchar(character);
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(null)";
					count_variable += _puts(str);
					break;
				case '%':
					count_variable += _putchar('%');
					break;
				default:
					count_variable += _putchar('%');
					count_variable += _putchar(*format);
					break;
			}
		}
		else
			count_variable += _putchar(*format);
		format++;
	}

	va_end(args);

	return (count_variable);
}
