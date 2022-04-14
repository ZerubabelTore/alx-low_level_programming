#include "main.h"

/**
 * _isupper - this program checks if character 
 * is upper case or not
 * @c: character to be checked
 * Return: 1 for upper case, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
