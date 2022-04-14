#include "holberton.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * followed by a new line. skips 2 and 4
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int i;
	
	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar (i + '0');
		}
		i++;
	}

	_putchar ('\n');
}
