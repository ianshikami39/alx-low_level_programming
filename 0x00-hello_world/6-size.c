#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)", sizeof(char));

	printf("size of an int: %zu bytes(s)", sizeof(int));
	printf("size of a long int: %zu byte(s)", sizeof(long int));
	printf("size of a long long int: %zu byte(s)", sizeof(long long int));
	printf("size of a float: %zu byte(s)", sizeof(float));
	return (0);
}
