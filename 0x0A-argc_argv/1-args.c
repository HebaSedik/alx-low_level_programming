#include <stdio.h>
/**
 * main - print number
 * @argc: number of argument
 * @argv: pointer
 * return: 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
