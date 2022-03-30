#include "main.h"
/**
*find_root - find square root of n
*@n: number to be square rooted
*@root: test var
*Return: n squared
*/

int find_root(int n, int root)
{
if ((root * root) > n)
return (-1);
if ((root * root) == n)
return (root);
return (find_root(n, root + 1));
}

/**
*_sqrt_recursion - func that returns natural square root of a number
*@n: number to be square rooted
*Return: n squared
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (find_root(n, 0));
}
