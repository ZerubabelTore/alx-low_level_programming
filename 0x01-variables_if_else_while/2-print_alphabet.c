#include <stdio.h>

/**
 * main  - this cod will print an alphabetical order a small
 * letters from a to z
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);

}
