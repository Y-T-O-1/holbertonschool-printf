#include "main.h"
#include <stdarg.h>

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
 * handle_format - Handles format specifiers or prints unrecognized ones
 * @format: Format specifier
 * Return: the counter for the format.
*/

int handle_format(const char *format, va_list ap, unsigned int *i) 
{
	int counter = 0;
	int (*f)(va_list) = check_format(format + 1);

	if (f == NULL) 
	{  /* Unrecognized format specifier */
		_putchar('%');
		if (format[1] != '\0')
		{
			_putchar(format[1]);
			(*i) += 2;  /* Skip over the '%' */
			counter +=1; 
		}
		else
		{
			return (-1);
		}
		}
	else
	{  /* Valid format specifier */
		counter += f(ap);
		(*i) += 2;  /* Skip over the '%' and the format specifier */
	}
	return counter;
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

    if (format == NULL)
        return (-1);

    va_start(ap, format);

    for (i = 0; format[i]; i++)
    {
        if (format[i] != '%')
        {
            _putchar(format[i]);
            counter++;
        }
        else
        {
            if (format[i + 1] == '%')
            {
                _putchar('%');
                counter++;
                i++;
            }
            else
            {
                int (*f)(va_list) = check_format(&format[i + 1]);
                if (f == NULL)
                {
                    _putchar(format[i]);
                    counter++;
                }
                else
                {
                    counter += f(ap);
                    i++;
                }
            }
        }
    }

    va_end(ap);
    return counter;
}