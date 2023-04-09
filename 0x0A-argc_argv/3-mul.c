#include <stdio.h>
#include <stdlib.h>
/**
 * main - print sum
 * @argc: number
 * @argv: pointer
 * return: 0.
 */
int main(int argc, char *argv[])
{
	int sum;
	if (agrc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("ERROR\n");
		return (1);
	}
	return (0);
}
