#include "main.h"
#include <unistd.h>

/**
 * print_s - Prints string
 * @s: Arguments
 *
 * @Return: Number of char printed
 **/ 
int print_s(va_list s)
{
	/* Set our perameters */
	char *str = va_arg(s, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i])
		_putchar(str[i++]);
	return (i);
}
