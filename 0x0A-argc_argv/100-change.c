#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 1 for error else 0
 */
int main(int argc, char *argv[])
{
	int cents;
	int mone;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		mone++;

		if ((cents - 25) >= 0)
		{
			cents = cents - 25;
			continue;
		}

		if ((cents - 10) >= 0)
		{
			cents = cents - 10;
			continue;
		}

		if ((cents - 5) >= 0)
		{
			cents = cents - 5;
			continue;
		}

		if ((cents - 2) >= 0)
		{
			cents = cents - 2;
			continue;
		}

		cents--;
	}

	printf("%d\n", mone);

	return (0);
}
