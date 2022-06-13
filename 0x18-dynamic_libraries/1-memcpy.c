#include "main.h"
/**
*_memcpy - func that copies memory area
*@dest: destination area var
*@src: original area var
*@n: bytes to be copied
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
