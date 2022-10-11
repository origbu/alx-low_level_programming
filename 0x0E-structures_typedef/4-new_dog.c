#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog-a function that creates a new dog.
 * @name:dog's name
 * @age:dog's age
 * @owner:dog's owner
 *
 * Return:NULL if it fails otherwise struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, lname, lowner;

	if (name == NULL || owner == NULL)
		return (NULL);
	p_dog = malloc(sizof(dog_t));
	if (p_dog == NULL)
		return (NULL);
	for (namel = 0; name[namel]; namel++)
		;
	namel++;
	p_dog->name = malloc(namel * sizeof(char));
	if (p_dog == NULL)
	{
		free(p_dog);
		return (NULL);
	}
	for (i = 0; i < namel; i++)
		p_dog->name[i] = name[i];
	p_dog->age = age;
	for (ownerl = 0; owner[ownerl]; ownerl++)
		;
	ownerl++;
	dog->owner = malloc(ownerl * (sizeof(char)));
	if (dog->owner == NULL)
	{
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}
	for (i = 0; i < ownerl; i++)
		p_dog->owner[i] = owner[i];
	return (p_dog);
}
