#include "main.h"
#include <ctype.h>
/**
* _islower - checks if it's lowercase
*/
int _islower(int c) {
char a;
a = c + '0';
if (a >= 'a' && a <= 'z')
{
return (1);
}
else
{
return (0);
}
}
