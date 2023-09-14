#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_sub(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two numbers
 * @a: first number to use
 * @b: second number to use
 * Return: returns sum of numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts b from a
 * @a: first number
 * @b: second number
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - outputs product of numbers
 * @a: first number
 * @b: second number
 * Return: returns product of numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - outputs division of numbers
 * @a: first number
 * @b: second number
 * Return: result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - outputs remainder of division
 * @a: first number
 * @b: second number
 * Return: return remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
