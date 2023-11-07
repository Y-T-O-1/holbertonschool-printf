#include "main.h"
#include <unistd.h>

/**
 * print_s - A function that prints a string.
 * @s: string to print passed as part of a variable arguments list
 * Return: The number of characters printed.
 */
int print_s(va_list s)
{
	/* Retrieve the next argument (a string) from the va_list */
	char *str = va_arg(s, char *);
	/* Initialize a counter for the number of characters printed */
	int i = 0;

	/* If the string is NULL, set it to print "(null)" instead */
	if (str == NULL)
	{
		str = "(null)";
	}

	/* Loop through the string and print each character until done */
	while (str[i])
	{
		/* Print current character and increment the print counter */
		_putchar(str[i++]);
	}

	/* Return the number of characters printed */
	return (i);
}
