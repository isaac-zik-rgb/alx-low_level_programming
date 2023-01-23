#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
int j = 0;
char *str, *stn = "";
va_list print;
va_start(print, format);
if (format)
{
while (format[i])
{
switch (format[j])
{
case 'c':
printf("%s%c", stn, va_arg(print, int));
break;
case 'i':
printf("%s%d", stn, va_arg(print, int));
break;
case 'f':
printf("%s%f", stn, va_arg(print, double));
break;
case 's':
str = va_arg(print, char *);
if (!str)
str = "(ni)";
printf("%s%s", stn, str);
break;
default:
j++;
continue;
}
stn = ",";
j++;
}
}
printf("\n");
va_end(print);
}
