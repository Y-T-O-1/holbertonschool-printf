#include "main.h"

/**
 * print_s - prints a string
 * @s: argument list
 * @Return: Always 1 (Unless it's not)
*/

int print_s(va_list s)
{
	/* Set our parameters*/
	int i = 0;
	char *str;

	str = va_arg(s, char*);
	/* Check if str is null, if it is print null */
	if (str == NULL)
		str = "(null)";
	
	while (str[i] != '\0') 
	{
		_putchar(str[i]);
		i++;
	}
return i;

}
