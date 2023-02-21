#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stdlib.h>
/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On erro, -1 is returned, and errno is set appripriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
