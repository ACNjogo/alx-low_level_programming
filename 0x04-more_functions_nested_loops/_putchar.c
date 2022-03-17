#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 * _putchar - int function
 * @c: variable
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
