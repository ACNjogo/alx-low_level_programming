#include "main.h"
#include <std.io>

/**
 *print_rev - func that prints string in reverse
 *@s: func variable
 */
void print_rev(char *s)
{
int n;
while (*s++ != '\0')
n++;
s -= n + 1;
while (n--)
_putchar(s[1]);
_putchar('\n)
}
