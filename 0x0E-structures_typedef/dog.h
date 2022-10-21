#ifndef DOG_H
#define DOG_H

/**
 * struct dog - building dogetown
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 */

struct dog
{
	char *name;
	char *owner;
	float age;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
