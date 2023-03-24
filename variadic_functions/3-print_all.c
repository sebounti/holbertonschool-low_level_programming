
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_char - print char -promoted type to int
 * @i: input paramter of type va_list
 * Return: no need
 */
void print_char (va_list i)
{
    printf("%c", va_arg (i, int));
}
/**
 * print_int - print int 
 * @i: input paramter of type va_list
 * Return: no need
 */
void print_int (va_list i)
{
    printf("%d", va_arg (i, int));
}
/**
 * print_float - print float, promoted type to double
 * @i: input paramter of type va_list
 * Return: no need
 */
void print_float (va_list i)
{
    printf("%f", va_arg (i, double));
}
/**
 * print_string - print string, treat NULL as (nil)
 * @i: input paramter of type va_list
 * Return: no need
 */
void print_string (va_list i)
{
    char *s;
    s = va_arg (i, char *);

    if (s == NULL)
    {
        printf("(nil)");
        return;
    }
    printf("%s", s);
}
/**
 * print_all - a function that prints all inputs
 * @format: a list of types of arguments passed in
 * Return: void
 */
void print_all(const char * const format, ...)
{   
    int i, j;
	char *sep = "";
	va_list ap;

	format_type printtypes[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(ap, format);

    i = 0;
    while (format != NULL && format [i] != '\0')
    {
            j = 0;
		while (j < 4)
            {
			if (*printtypes[j].format == format[i])
			{
			printf('%s', sep);
			*printtypes[j].func[ap];
			sep = ", ";
			}
			j++;
            }
		i++;
    }

	printf("\n");
	va_end (ap);
}