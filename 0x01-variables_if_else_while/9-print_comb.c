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
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
