#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct print - Structure to store format specifier and handling function.
 * @t: Type to print
 * @f: Function to print
*/

typedef struct print
{

	char *t;
	int (*f)(va_list);

} print_t;

int _printf(const char *format, ...);
int handle_format(const char *format, va_list ap, unsigned int *i);
int _putchar(char c);
int print_s(va_list s);
int print_c(va_list c);
int print_percent(va_list percent);

#endif /* MAIN_H */
