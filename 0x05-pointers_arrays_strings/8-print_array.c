#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints an array
 * @a: function variable
 * @n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
while (n-- > 0)
printf(n == 0 ? "%d" : "%d, ", *a++);
_putchar('\n');
}
