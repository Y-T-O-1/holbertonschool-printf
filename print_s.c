#include "main.h"
#include <unistd.h>

/**
 * print_s - prints a string
 * @s: argument list
 * @Return: Counter
*/

int print_s(va_list s)
{
	/* Set our parameters*/
	char *str = va_arg(s, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i])
		_putchar(str[i++]);
	return (i);
}
