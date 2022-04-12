#include "main.h"

/**
 * print_alphabet_x10 - This code will print the alphabets ten times in
 * the lower case.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int ch;
int repeat;

repeat = 1;
while (repeat <= 10)
{
for (ch = 'a' ; ch <= 'z'; ch++)
{
_putchar(ch);
}

repeat++;
_putchar('\n');

}

}
