#include <stdio.h>

/**
  * main - this code prints numbers from 0 to 9 by using commas
  * to suparate them
  *
  * Return: Always (Success);
  */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);

}
