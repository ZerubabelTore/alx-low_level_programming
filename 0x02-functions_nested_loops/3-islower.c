#include "main.h"

/**
 * _islower - this code check for lower case alphabets
 * @c: contain values to be compared
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{

		return (1);
	}
	else
	{
		return (0);
	}
}

