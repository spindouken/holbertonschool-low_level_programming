#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - copy string indicted by pointer src
 * @dest: destination
 * @src: source
 * Return: destination for future reference
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

/**
 * _strlen - return length of a string
 *
 * @s: variable
 *
 * Return: void
 */
int _strlen(char *s)
{
	int x = 0;

	while (*(s + x))
		x++;
	return (x);
}

/**
 * new_dog - take all data input and store in new mem location
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int x, y;

	dog_t *dogetown;

	x = 1 + _strlen(name);
	y = 1 + _strlen(owner);

	dogetown->name = malloc(sizeof(char) * x);

	dogetown->owner = malloc(sizeof(char) * y);

	_strcpy(dogetown->name, name);
	_strcpy(dogetown->age, age);
	_strcpy(dogetown->owner, owner);

	if (!(dogetown) = NULL)
	return(NULL);
}
