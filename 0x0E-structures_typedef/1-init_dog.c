#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - a structure thats cumulate data types
 *@d: a pointer to the struct data type
 *@name: a character pointer
 *@owner: a second character pointer
 *@age: a float variable
 * Return: Nothing;
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
  (*d).name =name;
  (*d).age = age;
  (*d).owner = owner;
}
