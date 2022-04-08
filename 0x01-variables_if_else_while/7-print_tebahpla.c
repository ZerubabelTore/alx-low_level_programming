#include <stdio.h>

/**
  * main - this code will print the alphabets in the order of
  * form the back to the front
  *
  * Return: Always (Success)
  */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);

}

