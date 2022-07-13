#include "main.h"

/**
* _strlen - function to get length of a string
* @s: string pointer to pass to this function
* Return: 0
*/
int _strlen(char *s)
{
int lent;
lent = 0;
while (s[lent] != '\0')
{
lent++;
}
return (lent);
}
