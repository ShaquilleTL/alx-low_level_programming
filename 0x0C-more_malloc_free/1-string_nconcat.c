#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenate s1 to s2
* @s1: first string
* @s2: Second string
* @n: Number of bytes of s2 to concatenate
*
* Return: New string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int size1, size2, tot_size;
unsigned int i, j;
char *str;

size1 = 0;
size2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[size1] != '\0')
size1++;

while (s2[size2] != '\0')
size2++;

if (n > size2)
n = size2;

tot_size = size1 + n + 1;
str = malloc(sizeof(char) * tot_size);
if (str == NULL)
return (0);
i = 0;
for (j = 0; j < size1; j++)
{
str[i] = s1[j];
i++;
}
for (j = 0; j < n; j++)
{
str[i] = s2[j];
i++;
}
str[i] = '\0';
return (str);
}
