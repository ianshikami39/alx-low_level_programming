#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)
{
	fprintf("Size of a char: %i byte(s)\n", sizeof(char));
	fprintf("size of an int: %i byte(s)\n", sizeof(int));
	fprintf("size of a long int: %i byte(s)\n", sizeof(long int));
	fprintf("size of a long long int: %i byte(s)\n", sizeof(long long int));
	fprintf("size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
