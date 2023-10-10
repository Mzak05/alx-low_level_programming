#include "main.h"
#include <ctype.h>
/**
* _islower - checks if it's lowercase
* c - parametrer that translates characters to their ASCII form
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
