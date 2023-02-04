#include "main.h"
/**
 * get_bit - get the number of bit at given index
 * @index: index of the bit
 *@n: number to search for
 * Return: value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int val;
if (index > 63)
return (-1);
val = (n >> index) & 1;
return (val);
}
