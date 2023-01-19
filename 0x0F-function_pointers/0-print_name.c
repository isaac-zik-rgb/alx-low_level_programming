#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print a name on stdout
 * @name: name to print
 * @f: a pointer to a function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)

return;

f(name);
}
