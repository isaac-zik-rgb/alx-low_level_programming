#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * _putchar - write to the standard output
 *
 * Return: Always 0
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
