#include "main.h"

/**
 * print_s - prints a string
 * @arg: argument list
 * @Return: Our return value
*/

int print_s(va_list arg)
{
	/* Set our parameters*/
	int i;
	char *str;

	str = va_arg(arg, char*);
	/* Check if str is null, if it is print null */
	if (str == NULL)
		str = "(null)";
	
	for (i = 0 ; str[i] != '\0'; i++)
		_putchar(str[i]);
		return (i);
}