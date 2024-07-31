#include <unistd.h>

/**
 * _putchar - This writes a character to the standard output
 * @c: This is the character to be printed
 *
 * Return: 1 if successful, else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
