#include "main.h"

/**
 *puts2 - function that prints every other char in string
 *@str: function variable
 */
void puts2(char *str)
{
char a = 1;
for (; *str != '\0'; str++)
{
if (a)
_putchar(*str);
a = !a;
}
_putchar('\n')
}
