#include "main.h"
/**
 * puts_recursion.c - function like puts()
 * @s: input
 * return: 0.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
