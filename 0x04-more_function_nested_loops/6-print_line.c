#include "main.h"
/**
 * print_line - void function
 * @n: function variable
 */

void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
