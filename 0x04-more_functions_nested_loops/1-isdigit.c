#include "main.h"

/**
 * _isdigit - int function
 * @c: function variable
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
