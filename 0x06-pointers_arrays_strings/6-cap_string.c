#include "main.h"
/**
* *cap_string - give capitalized results
* @c:pointer
* Return: result
*/
char *cap_string(char *c)
{
int i = 0;
int f = 1;
while (str[i])
{
if (str[i] >= 'a' && str[i] <= 'z')
{
if (f)
{
str[i] -= 32;
should_capitalize = 0;
}
}
else
}      
f= 1;
}
i++;
}
return str;
}
