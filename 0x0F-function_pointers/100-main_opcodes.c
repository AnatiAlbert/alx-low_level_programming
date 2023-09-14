#include <stdio.h>
#include <stdlib.h>
/**
 * main - output own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int bts, i;
	char *ray;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bts = atoi(argv[1]);

	if (bts < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ray = (char *)main;

	for (i = 0; i < bts; i++)
	{
		if (i == bts - 1)
		{
			printf("%02hhx\n", ray[i]);
			break;
		}
		printf("%02hhx ", ray[i]);
	}
	return (0);
}
