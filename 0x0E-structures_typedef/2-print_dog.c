#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print out strucyt element
 *@d: a pointer to the struct
 *
 *Return: 0 sucess
 */
void print_dog(struct dog *d)
{
if (d)
{
d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
printf("Age: %f\n", d->age);
d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
}
}
