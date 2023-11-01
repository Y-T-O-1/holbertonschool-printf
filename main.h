#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

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

/**
 * _printf - Produces output according to format.
 * @format: A character string containing zero or more directives.
 * 
 * Return: The number of characters printed.
*/

int _printf(const char *format, ...);

#endif /* MAIN_H */