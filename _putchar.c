#include <unistd.h>

/**
 * _putchar - writes to stdout
 * @c: character that its printing
 * Return: 1 if we're good, else if we aren't
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}