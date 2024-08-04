#include "main.h"
#include <stdarg.h>

/**
 * specifier_handler - Manages different format specifiers
 * @spec: Format specifier
 * @args: List of arguments
 *
 * Return: Number of characters to be printed
 */
int specifier_handler(const char spec, va_list args)
{
	int count_variable = 0;

	switch (spec)
	{
		case 'c':
			count_variable += _putchar(va_arg(args, int));
			break;
		case 's':
			count_variable += _puts(va_arg(args, char *));
			break;
		case 'd':
		case 'i':
			count_variable += print_integer(va_arg(args, int));
			break;
		case 'u':
			count_variable += print_usint(va_arg(args, unsigned int));
			break;
		case 'o':
			count_variable += print_octal(va_arg(args, unsigned int));
			break;
		case 'x':
			count_variable += print_hexadec(va_arg(args, unsigned int), 0);
			break;
		case 'X':
			count_variable += print_hexadec(va_arg(args, unsigned int), 1);
			break;
		case 'b':
			count_variable += print_bin(va_arg(args, unsigned int));
			break;
		case '%':
			count_variable += _putchar('%');
			break;
		default:
			count_variable += _putchar('%');
			count_variable += _putchar(spec);
			break;
	}

	return (count_variable);
}
