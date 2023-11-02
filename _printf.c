#include "main.h"
#include <stdarg.h>
#include <stdbool.h>

/**
 * check_format - checks if there is a valid format specifier
 * @format: possible valid format specifier
 * Return: pointer to valid function or NULL
 */
int (*check_format(const char *format))(va_list)
{
    print_t p[] = {
        {"c", print_c},
        {"s", print_s},
        {"%", print_percent},
        {NULL, NULL}
    };

    int i;
    for (i = 0; p[i].t != NULL; i++)
    {
        if (*(p[i].t) == *format)
            return p[i].f;
    }

    return (NULL);
}

/**
 * _printf - Function that mimics printf
 * @format: a string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list ap;
    int i, counter = 0;
    bool hasNonPercentChar = false;

    if (format == NULL)
        return (-1);

    va_start(ap, format);

    for (i = 0; format[i]; i++)
    {
        if (format[i] != '%')
        {
            _putchar(format[i]);
            counter++;
            hasNonPercentChar = true;
        }
        else
        {
            if (format[i + 1] == '%')
            {
                _putchar('%');
                counter++;
                i++;
                hasNonPercentChar = true;
            }
            else
            {
                int (*f)(va_list) = check_format(&format[i + 1]);
                if (f == NULL)
                {
                    _putchar(format[i]);
                    counter++;
                    hasNonPercentChar = true;
                }
                else
                {
                    counter += f(ap);
                    i++;
                    hasNonPercentChar = true;
                }
                while (format && format[i]) 
                {
                    if (format[i] == '%' && format[i + 1] != '\0')
                    {
                        counter += handle_format(&format[i], ap, &i);
                    }
                    else
                    {
                        _putchar(format[i++]);
                        counter++;
                    }
                }
            }
        }
    }

    va_end(ap);

    if (!hasNonPercentChar)
        return (0);

    return counter;
}



