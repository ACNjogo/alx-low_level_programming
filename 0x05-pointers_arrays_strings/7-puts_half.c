#include "main.h"
/**
 *puts_half - void function that prints half a string
 *@str: func variable
 */
void puts_half(char *str)
{
int n = 0;
while (*str++ != '\0')
n++;
str -= n / 2 + 1;
while (*str != '\0')
_putchar(*str++);
_putchar('\n');
}
