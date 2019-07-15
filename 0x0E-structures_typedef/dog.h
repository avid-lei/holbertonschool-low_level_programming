#ifndef DOG_H
#include <stdio.h>
#define DOG_H


/**
  * struct dog - struct for dog
  *@name: char
  *@age: int
  *@owner: char
 */

struct dog
{

	char *name;
	float age;
	char *owner;

};


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

