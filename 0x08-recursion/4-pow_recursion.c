#include "main.h"
/**
*_pow_recursion - func that returns value of x raised to power of y
*@x: int to be powered
*@y: int to use to raise x
*Return: value of x^y
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
return (1);
}
