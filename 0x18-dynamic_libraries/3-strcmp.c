#include "main.h"
/**
 *_strcmp - function that compares 2 strings
 *@s1: string 1
 *@s2: string 2
 *Return: 0
 */

int _strcmp(char *s1, char *s2)
{
int n = 0;
while (*(s1 + n) == *(s2 + n) && *(s1 + n))
n++;
if ((*s2 + n))
return (*(s1 + n) -*(s2 + n));
else
return (0);
}
