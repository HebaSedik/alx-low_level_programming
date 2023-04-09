#include <stdio.h>
#include <stdlib.h>
/**
 * main - print minimun number
 * @argc: number of commandline.
 * @argv: pointer to array
 * return: 0.
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, leastcoin = 0, money = atoi(argv[1]);
		int cent[] = {25, 10, 5, 2, 1};
		for (i = 0; i < 5; i++)
		{
			if (money >= cent[i])
			{
				leastcoin += money / cent[i];
				money = money % cent[i];
				if (money % cent[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", leastcoin);
	}
	else
	{
	printf("ERROR\n");
	return (1);
	}
	return (0);
}
