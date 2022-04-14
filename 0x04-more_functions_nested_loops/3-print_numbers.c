#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 * a: number to be checked
 */

void print_numbers(void)
{
	int a;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}

	_putchar('\n');

}
