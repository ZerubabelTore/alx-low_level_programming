#include "main.h"

/**
 * _isalpha - this code check for lower case alphabets and
 * uppercase
 * @c: contain values to be compared
 * Return: Always 0
 */

int _isalpha(int c)
{
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {

                return (1);
        }
        else
        {
                return (0);
        }
}

