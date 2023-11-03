#include "main.h"

/**
 *print_d - print number
 *@arg: argument list
 *Return: always 1
 */
int print_d(va_list arg)
{
	int i = 0, j = 0, num = 1;
	unsigned int n;

	i = va_arg(arg, int);

	if (i < 0)
	{
		j += _putchar('-');
		n = i * -1;
	}
	else
		n = i;

	for (; n / num > 9 ;)
		num *= 10;
	for (; num != 0 ;)
	{
		j += _putchar('0' + n / num);
		n %= num;
		num /= 10;
	}
	return (j);
}




