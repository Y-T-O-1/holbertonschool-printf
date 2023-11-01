#include "main.h"

/**
 * print_c - A funtion that prints a single char
 * @c: character to print
 * Return: Always 1 (Success)
*/

int print_c(va_list c)
{
    char character = (char)va_arg(c, int);
    _putchar(character);

    return (1);
}
