#include "main.h"

/**
 * print_times_table - Prints the time table of the input.
 * starting with 0.
 * @n: The value of the times table to printed
 */

void print_times_table(int n)
{
	int num, mult, prod;

	if  (n >= 0 && n <= 14)
	{
	for (num = 0; num <= n; num++)
	{
	for (mult = 0; mult <= n; mult++)
	{
	prod = num * mult;
	if (prod > 99)
	{
	_putchar(',');
	_putchar(32);
	_putchar((prod / 100) + '0');
	_putchar(((prod / 10) % 10) + '0');
	_putchar((prod % 10) + '0');
	}
	else if (prod > 9)
	{
	_putchar(' ');
	_putchar(32);
	_putchar(((prod / 10) % 10) + '0');
	_putchar((prod % 10) + '0');
	}
	else if (mult != 0)
	{
	_putchar(',');
	_putchar(32);
	}
	else
	{
	_putchar(prod + '0');
	}
	_putchar('\n');
	}
	}
	}
}
