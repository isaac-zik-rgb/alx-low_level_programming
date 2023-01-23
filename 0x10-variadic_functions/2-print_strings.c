#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print out strings on standard out-put
 * @separator: a pointer to tge string to print out
 * @n: numbetrs of strings to print
 *Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int y;
char *str;
va_list string;
va_start(string, n);
for (y = 0; y < n; y++)
{
str = va_arg(string, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (y != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(string);
}
