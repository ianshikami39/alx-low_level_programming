#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 *
 * @n: starting integer
 *
 * Description: prints all natural number from n - 98
 *
 * Return: void
 */

void print_to_98(int n)
{	
	if (n < 98)
	{
		while (n < 98)
		

	if (n >= 0 ; && n <= 98)
	{
		for(i = n ; i <= 98 ; i++)
		{
			printf("%d, ", i);
		}
		printf('\n');
	}
	else if (n < 0)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d, ", i);
		}
		printf('\n');
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf('%d, ", i);
		}
		printf('\n');
	}
	else if (n == 98)
		printf("%d, ", n);
}
