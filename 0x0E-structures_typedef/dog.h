#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Provides details of a dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Name of dog's owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


#endif
