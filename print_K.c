#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int print_K(va_list K)
{
    char *str = va_arg(K, char *);
    int len = 0;

    while (str && *str)
    {
        putchar(*str);
        str++;
        len++;
    }

    return len;
}
