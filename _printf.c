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
 * @format: format string
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int i = 0, counter = 0;

	if (!format) /* check if format string is NULL */
		return (-1);

	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			counter += handle_format(&format[i], ap, &i);
			/* Continue to the next iteration of the loop */
			}
			else if (format[i] == '%' && format[i + 1] == '\0')
			{
			/* If we have a '%' at the very end, we break out of the loop */
			break;
		} 
		else
		{
			_putchar(format[i]);
			counter++;
			i++; /* Move to the next character */
		}
	}
	va_end(ap);

    return (counter);
}
