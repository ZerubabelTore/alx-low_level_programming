#include "main.h"

/**
 * print_name - This function will prints a name
 * @name: name of the person
 * @f: input pointer function and execute it
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
