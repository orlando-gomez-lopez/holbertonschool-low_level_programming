#include "3-calc.h"
/**
 * op_add - add two numbers
 * @a: number1
 * @b: number2
 * Return: add
 **/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two numbers
 * @a: number1
 * @b: number2
 * Return: subs
 **/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: number1
 * @b: number2
 * Return: mul
 **/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 * @a: number1
 * @b: number2
 * Return: div
 **/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n"), exit(100);
	}
	return (a / b);

}

/**
 * op_mod - module two numbers
 * @a: number1
 * @b: number2
 * Return: mod
 **/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n"), exit(100);
	}
	return (a % b);
}
