#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - raised x to the power of y
 *@x: the base value
 *@y: power value
 *Return: 0 success
 */
/*raise x to the power of y*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
/*if the power value is not 0*/
/*The base value should times with the value the funtion returns*/
else if (y != 0)
{
return (x * _pow_recursion(x, y - 1));
}
  /*the base recursion in order to exit our recursion*/
else
{
return (1);
}
