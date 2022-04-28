#include "main.h"

/**
*binary_to_uint - func that conv binary to int
*@b: string to conv
*Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int ui;
int length, base2;
if (!b)
return (0);
ui = 0;
for (length = 0; b[length] != '\0'; length++)
;
for (length--, base2 = 1; length >= 0; length--, base2 *= 2)
{
if (b[length] != '0' && b[length] != '1')
{
return (0);
}

if (b[length] & 1)
{
ui += base2;
}
}
return (ui);
}
