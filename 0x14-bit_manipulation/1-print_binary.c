#include "main.h"
/**
 * expo_anati - evaluates exponent of number
 * @num: number to be exponented
 * @exp: value of exponent
 * Return: value of exponented number
 */
unsigned long int expo_anati(unsigned int num, unsigned int exp)
{
	unsigned long int n = 1;
	unsigned int val;

	for (val = 1; val <= exp; val++)
		n =  n * num;
	return (n);
}

/**
 * print_binary - prints binary representation of a number
 * @n: number to be changed to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int splitor, figa;
	char pole = 0;

	splitor = expo_anati(2, sizeof(unsigned long int) * 8 - 1);

	while (splitor != 0)
	{
		figa = n & splitor;
		if (figa == splitor)
		{
			pole = 1;
			_putchar('1');
		}
		else if (pole == 1 || splitor == 1)
			_putchar('0');
		splitor = splitor >> 1;
	}
}
