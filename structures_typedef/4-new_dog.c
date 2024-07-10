#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - function that creates a new dog.
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int k, j, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (k = 0; name[k]; k++)
	{}
	k++;
	dog->name = malloc(k * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < k; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (j = 0; owner[j]; j++)
	{}
	j++;
	dog->owner = malloc(j * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < j; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
