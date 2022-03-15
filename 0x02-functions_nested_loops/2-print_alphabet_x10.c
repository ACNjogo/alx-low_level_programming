#include "main.h"
/**
 *print_alphabet - prints alphabet
 *Return: 0
 */

void print_alphabet(void)
{
char i;
char j;
 for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
