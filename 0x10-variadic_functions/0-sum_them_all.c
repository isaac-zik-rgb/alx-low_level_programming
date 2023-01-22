#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - calculate the number of arguments passed to the fuction
 * @n: the fixed parameter
 *
 * Return: the sum of the giving arguments
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
  /*including my variable list*/
va_list ap;
va_start(ap, n);
  /*using my for loop to loop the count*/
if (n == 0)
return (0);
for (i = 0; i < n; i++)
sum += va_arg(ap, unsigned int);
return (sum);
va_end(ap);
}
