#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* print_dog - dog
* @dogo: dog
*/
void print_dog(struct dog *dogo)
{
if (dogo != NULL) {
if (dogo->name != NULL) {
printf("Name: %s\n", dogo->name);
}
else {
printf("Name: (nil)\n");
}
if (dogo->age != 0) {
printf("Age: %f\n", dogo->age);
}
else {
printf("Age: 0\n");
}
if (dogo->owner != NULL) {
printf("Owner: %s\n", dogo->owner);
}
else {
printf("Owner: (nil)\n");
}
}
}
