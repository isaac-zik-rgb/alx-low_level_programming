#include <stdio.h>
#include "main.h"
/**
 * swap_int - function that swap two intger value through pointer
 *@a: an intger is passed as the first parameter with its value
 *@b: another integer passed as a second parameter
 * Return: Value
 */
void swap_int(int *a, int *b)
{
  *a = b;
  *b = a;
}
