#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* print_dog - dog
* @dogo: dog
*/
void print_dog(struct dog *dogo)
{
if (dogo != NULL)
{
printf("Name: %s\n", dogo->name);
printf("Age: %f\n", dogo->age);
printf("Owner: %s\n", dogo->owner);
}
}
