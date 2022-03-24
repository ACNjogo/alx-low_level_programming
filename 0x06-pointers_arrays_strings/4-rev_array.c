#include "main.h"
/**
 *reverse_array - function that reverse the content of an array of integers
 *@a: variable to be reversed
 *@n: number of elements of array
 */

void reverse_array(int *a, int n)
{
int i;
int j;
int x;
for (i = 0; i < n - 1; i++)
{
for (j = i + 1; j > 0; j--)
{
x = *(a + j);
*(a + j) = *(a + (j - 1));
*(a + (j - 1)) = x;
}
}
}
