#include "dog.h"
#include <stdlib.h>
/**
* free_dog - Frees dogs
* @d: The dogs to be freed
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d);
}
}
