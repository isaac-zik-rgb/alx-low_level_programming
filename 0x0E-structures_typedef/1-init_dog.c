#include <stdio.h>
#include "dog.h"
#include "main.h"
/**
 *init_dog - a structure thats cumulate data types
 *@d: a pointer to the struct data type
 *@name: a character pointer
 *@owner: a second character pointer
 *@age: a float variable
 * Return: Nothing;
 */
void init_dog(struct dog *d, char *name __attribute__((unused)), float age __attribute__((unused)), char *owner __attribute__((unused)))
{
   struct dog dog;
  d = &dog;
  (*d).name = "Isaac";
  (*d).owner = "Gravity";
  (*d).age = 23;
}
