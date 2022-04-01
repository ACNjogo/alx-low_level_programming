#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
* is_num - func that iterates through each argv to test if it's a number
* @argvv: an argv
* Return: 1
*/

bool is_num(char *argvv)
{
int j = 0;

for (j = 0; argvv[j]; j++)
{
if (!(argvv[j] >= '0' && argvv[j] <= '9'))
return (0);
}
return (1);
}

/**
* main - print sum if all arguments given are numbers
* @argc: argument counter
* @argv: arguments
* Return: 0 on success, 1 if an argument wasn't a number
*/

int main(int argc, char *argv[])
{
int i = 1;
int sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}
while (i < argc)
{y
if (is_num(argv[i]))
sum += atoi(argv[i]);
else
{
printf("Error\n");
return (1);
}
i++;
}
printf("%d\n", sum);

return (0);
}
