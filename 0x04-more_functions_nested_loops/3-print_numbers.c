#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 * a: neber to be checked
 */

void print_numbers(void)
{
	int a;
	
	for (a = 0; a <= 9; a++)
	{
		_putchar("%d", a);
	}

	_putchar('\n');

}
