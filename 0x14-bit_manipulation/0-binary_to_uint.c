#include "main.h"
#include <stdlib.h>
/**
 * binary_to_unit - convert binary number to an unsigned integer
 * @b: a pointer to a string of 0s and 1s
 *
 *Return: converted number or 0 if there is more than one chars
 */
unsigned int binary_to_unit(const char *b)
{
unsigned int i;
unsigned int numb = 0;
if (!b)
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
numb = 2 * numb + (b[i] - '0');
}
return (numb);
}
