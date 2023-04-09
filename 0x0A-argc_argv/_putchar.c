#include <stdio.h>
#include "main.h"
/**
 * _putchar - write character c to stdout
 * @c: character to print
 * return: 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
