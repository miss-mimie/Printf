#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * _putchar - Writes a character to stdout
 * @c: Character to be printed
 *
 * Return: On Success 1, on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
	//You can delete this
}

/**
 * _print_string - Writes a string to stdout
 * @str: String to be printed
 *
 * Return: The number of characters printed
 */
int _print_string(const char *str)
{
	int counter = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		counter += _putchar(*str);
		str;
	}

	return (counter);
}

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
					count_variable += _putchar(va_arg(args, int));
					break;
				case 's':
					count_variable += _print_string(va_arg(args, char));
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
