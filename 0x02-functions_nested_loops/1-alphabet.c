#include <stdio.h>

/**
 * print_alphabet - Entry point
 *
 * Description: 'type of integer in a random numberd'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
