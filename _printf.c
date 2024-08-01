#include "main.h"
#include <stdarg.h>

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
	const char *pointer;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (pointer = format; *pointer != '\0'; pointer++)
	{
		if (*pointer == '%')
		{
			pointer++;
			if (*pointer == '\0')
				break;
			count_variable += specifier_handler(*pointer, args);
		}
		else
			count_variable += _putchar(*pointer);
	}

	va_end(args);

	return (count_variable);
}
