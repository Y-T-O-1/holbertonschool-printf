#include "main.h"

/**
 * print_d - print number
 * @arg: argument list
 * Return: count of printed characters
 */
int print_d(va_list arg)
{
    int i = 0, j = 0, num = 1;
    unsigned int n;

    /* Retrieve the next argument from the va_list */
    i = va_arg(arg, int);

    /* If the integer is negative, print the minus sign and convert to unsigned */
    if (i < 0)
    {
        /* Print minus and increment the count */
        j += _putchar('-');
        /* Convert negative number to positive equivalent */
        n = i * -1;
    }
    else
    {
        /* If the integer is not negative, assign it directly to n */
        n = i;
    }

    /* Calculate the highest decimal place of the number */
    for (; n / num > 9;)
    {
        /* Increase num until it's the leftmost digit */
        num *= 10;
    }

    /* Loop to print each digit */
    for (; num != 0;)
    {
        /* Print current digit and increment the count */
        j += _putchar('0' + n / num);
        /* Remove the current highest digit from n */
        n %= num;
        /* Move to the next lower decimal place */
        num /= 10;
    }

    /* Return the count of characters printed */
    return (j);
}
