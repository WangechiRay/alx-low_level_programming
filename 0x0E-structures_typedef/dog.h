#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a new type
 * @name:name of dog
 * @age:its age
 * @owner:the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif


