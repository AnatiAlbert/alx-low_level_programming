#include <stdio.h>
/**
 * main - A program tha prints alphabet in lower expt q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		0}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
