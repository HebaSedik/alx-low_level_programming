#include "main.h"
#include <unistd.h>
/**
 * _putchar - wwrites the character c to stdout
 * @c: The Character to print
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
