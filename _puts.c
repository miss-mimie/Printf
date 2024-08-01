#include "main.h"

/**
 * _puts - this writes the string to the standard output
 * @str: This is the string to be printed
 *
 * Return: the number of characters printed (excluding the null byte used to end output to strings)
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
