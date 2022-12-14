#include <stdio.h>

/**
 * _islower
 *
 * Description: 'c type of integer in a random numberd'
 * 
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
