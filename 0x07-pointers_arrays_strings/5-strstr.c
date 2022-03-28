#include "main.h"
#include <stdio.h>
/**
* _strstr-locates a substring.
* @haystack:the string that checks
* @needle:the substring to be located
* Return:a pointer to the beginning of the located substring
*         or NULL if substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
int x;
int n = 0;
while (needle[n] != '\0')
n++;

while(*haystack)
{
for (x = 0; needle[x]; x++)
{
if (haystack[x] != needle[x])
break;

}
if (x != n)
haystack++;
else
return (haystack);
}
return (NULL);
}

