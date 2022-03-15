#include "main.h"
#include "6-abs.c"

/**
*print_last_digit - main
*@j: integer to get last digit of
*Return: last digit of j
*/

int print_last_digit(int j)
{
_putchar('0' + _abs(j % 10));
return (_abs(j % 10));
}
