#include "main.h"
/**
 * print_numbers - print numbers
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int b;

	while (b <= 9)
	{
		_putchar (b + '0');
		b++;
	}
	_putchar ('\n');

}
