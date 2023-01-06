#include <stdio.h>
#include "main.h"
/**
 * factorial - factorize a given number
 *@n: n being the given number
 *Return: success
 */
/*
 *Return: -1 if n < 0
 *Return: factorial of the given number if condition is met
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
return (n * factorial(n - 1));
}
