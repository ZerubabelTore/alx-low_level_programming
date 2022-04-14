#include "main.h"
/**
 * print_numbers - prints the numbers, from
 * 0 to 9, followed by a new line
 * @b: number to be checked
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int b;

	while (b <= 9)
	{
		_putchar(b + '0');
		b++;
	}
	_putchar('\n');
}
