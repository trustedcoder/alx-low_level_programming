#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'type of integer in a random numberd'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %ld bytes\n", sizeof(int));
	printf("Size of a long int: %ld bytes\n", sizeof(long int));
	printf("Size of a long long int: %ld bytes\n", sizeof(long long int));
	printf("Size of a float: %ld bytes\n", sizeof(float));
	return (0);
}
