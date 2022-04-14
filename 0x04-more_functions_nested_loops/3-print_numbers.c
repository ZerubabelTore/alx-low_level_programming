#include "main.h"
/**
 * print_numbers - print numbers which are betwwen
 * 9 and 0
 * @b: nuber to be checked
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
