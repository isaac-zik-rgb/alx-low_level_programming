#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - the function that search for  value in an arry of
 * integers using liner search algorithm
 * @array: a pointer to the first element of the array to search
 * @size: the number of element in the array
 * @value: the value to search for
 * Return: -1 if array is NULL or value if present
 */

int linear_search(int *array, size_t size, int value)
{
int is_not_array = 1;
size_t num;
if (array != NULL)
{
for (num = 0; num < size; num++)
{
if (array[num] == value)
{
printf("Value checked array[%ld] = [%d]\n", num, array[num]);
is_not_array = 0;
break;
}
else
{
printf("Value checked array[%ld] = [%d]\n", num, array[num]);
}
}
if (is_not_array)
{
return (-1);
}
else
{
return (num);
}
}
return (-1);
}
