#include <stddef.h>
#include "dog.h"
/**
  * init_dog - Function name
  * @d: pointer to struct dog
  * @name: Function argument
  * @age: Function argument
  * @owner: Function argument
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
