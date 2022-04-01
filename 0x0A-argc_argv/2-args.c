#include <stdio.h>
#include "main.h"

/**
* main - func that prints each argument passed to program on a line
* @argc: argument counter
* @argv: pointer to array of arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
int n = 0;

while (n < argc)
printf("%s\n", argv[n++]);

return (0);
}
