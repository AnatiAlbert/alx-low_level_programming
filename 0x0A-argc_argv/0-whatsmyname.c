#include <stdio.h>
/**
 * main - prints it's name
 * @argc: count of command line arguments
 * @argv: array containg command line arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
