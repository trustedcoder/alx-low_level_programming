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
		int j;

		for (j = 0; j <= 9; j++)
		{
			int k;

			for (k = 0; k <= 9; k++)
			{
				if (i == j || i == k || j == k)
				{
					continue;
				}
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				putchar('\n');
			}
		}
	}
	return (0);
}

