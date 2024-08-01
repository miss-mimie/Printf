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
