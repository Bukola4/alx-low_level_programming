#include "main.h"
/**
* reverse_array - reversing an array
* @a: array a
* @n: an element of an array
*
* Return: void
*/
void reverse_array(int *a, int n);
{
int temp, counter;

n = n - 1;
counter = 0;
while (counter <= n)
{
temp = a[counter];
a[counter++] = a[n];
a[n--] = temp;
}
}
