#include "main.h"
#include <stdarg.h>

/**
 * check_format - checks if there is a valid format specifier
 * @format: possible valid format specifier
 * Return: pointer to valid function or NULL
*/
int (*check_format(const char *format))(va_list)
{
int i = 0; /* Initiliazes an array of print_t structures */
print_t p[] = {
{"c", print_c},
{"s", print_s},
{"%", print_percent},
{NULL, NULL}
};

for (; p[i].t != NULL; i++) /* t = pointer to char(string) */
{
	if (*(p[i].t) == *format)
		break;
	}
	return (p[i].f); /* f =  represents function pointer stored */
}

/**
 * _printf - Function that mimics printf
 * @format: a string
 * Return:
*/
int _printf(const char *format, ...)
{
	va_list ap; /* Used to acces variable arguments */
	int (*f)(va_list); /* Stores the adderss of a function */
	unsigned int i = 0, counter = 0; /* Keeps track of current position */

	if (format == NULL) /* Checks if string is NULL */
		return (-1);

	va_start(ap, format); /* Initializes ap to point to first arg */
	while (format && format[i]) /* Starts the loop */
	{
		if (format[i] != '%') /* Checks if current char is not % */
		{
			_putchar(format[i]);
			counter++;
			i++;
			continue;
		}
		else
		{
			if (format[i + 1] == '%') /* Checks if current char is % */
			{
				_putchar('%');
				counter++;
				i += 2;
				continue;
			}
			else
			{
f = check_format(&format[i + 1]); /* Checks for specifier */
if (f == NULL)
return (-1);
				i += 2;
				counter += f(ap);
				continue;
			}
		}
		i++;
	}
	va_end(ap);
	return (counter);
}

