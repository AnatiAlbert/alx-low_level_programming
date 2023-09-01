#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiples two numbers
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int num;
	int num2;
	int result;

	if (argc == 3)
	{
		num = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num * num2;

		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
