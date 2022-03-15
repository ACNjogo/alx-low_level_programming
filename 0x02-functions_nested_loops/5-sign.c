#include "main.h"
/**
 *print_sign - main
 *@i: defined number
 *Return: 1 if positive, 0 if 0m -1 if negative
 */
int print_sign(int i)
{
if (i > 0)
{
_putchar('+');
return (1);
}
else if (i == 0)
{
_putchar('0');
}
else
{
_putchar('-');
return (-1);
}
}
