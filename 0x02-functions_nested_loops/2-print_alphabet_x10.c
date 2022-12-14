#include <stdio.h>

/**
 * print_alphabet_x10 - Entry
 * Description: 'type of integer in a random numberd'
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}
