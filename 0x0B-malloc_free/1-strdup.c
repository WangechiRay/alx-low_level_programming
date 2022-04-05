#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly space in memory,which
*           contains a copy of the string given as parameter
* @str: pointer to be allocated
*
* Return: NULL if str == NULL else pointer that has a copy of the string
*/

char *_strdup(char *str)
{
char *point;
int s, len = 0;

if (str == NULL)
return (NULL);

for (s = 0; str[s]; s++)
len++;

point = malloc(sizeof(char) * (len + 1));

if (point == NULL)
return (NULL);

for (s = 0; str[s]; s++)
point[s] = str[s];

point[len] = '\0';

return (point);
}
