#include <stdio.h>

/**
 * _islower
 * Description: 'type of integer in a random numberd'
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
