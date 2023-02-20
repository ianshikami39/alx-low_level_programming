#include <stdio.h>

/**
 * main - main function
 *
 * Return: o on success
 */

int main(void)
{
	printf("Size of the char: %lu byte(s)", sizeof(char));
	printf("size of the int: %lu bytes(s)", sizeof(int));
	printf("size of the long int: %lu byte(s)", sizeof(long int));
	printf("size of the long long int: %lu byte(s)", sizeof(long long int));
	printf("size of the float: %lu byte(s)", sizeof(float));
	return (0);
}
