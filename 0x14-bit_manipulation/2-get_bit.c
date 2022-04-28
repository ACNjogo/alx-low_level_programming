#include "main.h"


/**
*get_bit - func that returns value of a bit at an index
*@index: the index
*@n: number to go through
*Return: -1 if error or value at index
*/

int get_bit(unsigned long int n, unsigned int index)
{
if (index > 32)
return (-1);
return (n >> index & 1);
}
