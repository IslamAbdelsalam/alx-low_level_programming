#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: new struct
 * @name: name of the dog
 * @age:lol
 * @owner: owner of the dog
 *
 * Return: void
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
