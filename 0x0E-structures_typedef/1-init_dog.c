#include <stdlib.h>
#include "dog.h"
/**
* init_dog - initializes a variable of type struct dog
* @f: pointer to struct dog to initialize
* @name: name to initialize
* @age: age to initialize
* @owner: owner to initialize
*/
void init_dog(struct dog *f, char *name, float age, char *owner)
{
if (f == NULL)
f = malloc(sizeof(struct dog));
f->name = name;
f->age = age;
f->owner = owner;
}
