#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two numbers
 * @a: number 1
 * @b: number 2
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of two numbers
 * @a: number 1
 * @b: number 2
 * Return: returns the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the products of two numbers
 * @a: number 1
 * @b: number 2
 * Return: the products of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the division of two numbers
 * @a: number 1
 * @b: number 2
 * Return: the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder of division of two numbers
 * @a: number 1
 * @b: number 2
 * Return: the remainder of devision of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
