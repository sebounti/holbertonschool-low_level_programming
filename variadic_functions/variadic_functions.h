#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format - Struct format
 *
 * @format: the string format
 * @func: the function for which way to print
 */
typedef struct format
{
	char *format;
	void (*func)(va_list);
} format_type;

#endif
