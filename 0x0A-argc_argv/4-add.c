#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * main - adds positiv numbers
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int add = 0;
	int j;
	unsigned int n;
	char *al;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			al = argv[j];
			for (n = 0; n < strlen(al); n++)
			{
				if (al[n] > 57 || al[n] < 48)
				{
					printf("Error\n");
					return (1);
				}
			}
			add = add + atoi(al);
			al++;
		}
		printf("%d\n", add);
	}
	else
		printf("0\n");
	return (0);
}
