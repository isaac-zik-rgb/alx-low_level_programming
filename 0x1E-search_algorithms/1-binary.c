#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers using Binary search algorithm
 * @array: A pointer to the first element of the array to search
 * @value: the value to search for
 * @size: the number of element in the array
 * Return: -1 if array is NULL or value not in array
 */
int binary_search(int *array, size_t size, int value)
{
  