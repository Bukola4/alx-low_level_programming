/*
* File: 1-memcpy.c
* Auth: Bukola Adegboyega
*/

#include "main.h"
/**
* _memcpy - memory copy
* @dest: destination memory
* @src: source memory
* @n: number of bytes to be copied
*
* Return: string copied from source
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
int j = 0;

while (n > 0)
{
dest[i] = src[j];
i++;
j++;
n--;
}
return (dest);
}
