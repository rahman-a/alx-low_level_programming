#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strcopy - a function that copies a string.
 * @dest: destination string
 * @src: source string
 * Return: a pointer to the resulting string dest
*/

char *_strcopy(char *dest, char *src)
{
	int track;

	for (track = 0; src[track] != '\0'; track++)
		dest[track] = src[track];

	dest[track] = '\0';

	return (dest);
}

/**
 * _strlen - a function that returns the length of a string.
 * @s: string to measure his length
 * Return: length of string
*/

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		++len;
	return (len);
}


/**
 * new_dog - a function that creates a new dog.
 * @name:dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to dog struct
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(_strlen(name) + 1);
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(_strlen(owner) + 1);
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);
	return (dog);
}
