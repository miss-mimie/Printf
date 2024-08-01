#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/* Function prototypes */
/* Printf function */
int _printf(const char *format, ...);

/* Handles indicated specifiers */
int specifier_handler(const char spec, va_list args);

/* Writes to stdout */
int _putchar(char c);
int _puts(const char *str);

/* Prints numbers */
int print_integer(int j);

/* Converts unsigned int to binary */
int print_bin(unsigned int b);

/* Functions for u, o, x, X specifiers */
int print_unsigned(unsigned int n);
int print_hexadec(unsigned int n, int upper);
int print_octal(unsigned int n);

#endif
