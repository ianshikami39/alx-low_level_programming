#include <unistd.h>

/**
 * _putchar - prints/write c
 * @c: The character to print
 * Return: 1, success, -1 error
 */

int _putchar(char c)
{
	return(write(1. &c, 1));
}