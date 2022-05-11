#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - add numbers
  * @a: to be add
  * @b: yo be add
  *
  * Return: ...
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - substract numbers
  * @a: ..
  * @b: ...
  *
  * Return: ...
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Multiplies
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Divied
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - Give the modular
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
