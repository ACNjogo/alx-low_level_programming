#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *rev_string - function that reverses string
 *@s: variable in func
 */
void rev_string(char *s)
{
int i;
int j = 0;
while (*s++ != '/0')
j++;
s -= j + 1;
for (i = 0; i < j / 2; i++)
{
char a = s[i];
s[i] = s[j - i - 1];
s[y - x - 1] = a
}
}
