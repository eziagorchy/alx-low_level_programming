#include <stdlib.h>
#include "dog.h"
#include "lens.c"
/**
  * new_dog - Function name for creating new dog of type struct dog/dog_t
  * @name: Dog name
  * @age: Dog age
  * @owner: Dog owner
  * Return: A dog object
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;
	char *dogg_name;
	char *dogg_owner;
	int i = 0;
	int j = 0;

	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);
	dogg_name = malloc((len_s(name)) * sizeof(*name));
	if (dogg_name == NULL)
	{
		free(dogg);
		return (NULL);
	}
	while (name[i] != '\0')
	{
		dogg_name[i] = name[i];
		i++;
	}
	dogg_name[i] = '\0';
	dogg->name = dogg_name;
	dogg->age = age; /** Create ownercopy LIKE name, assign owner to dogg below */
	dogg_owner = malloc((len_s(owner)) * sizeof(*owner));
	if (dogg_owner == NULL)
	{
		free(dogg_name);
		free(dogg);
		return (NULL);
	}
	while (owner[j] != '\0')
	{
		dogg_owner[j] = owner[j];
		j++;
	}
	dogg_owner[j] = '\0';
	dogg->owner = dogg_owner;
}
