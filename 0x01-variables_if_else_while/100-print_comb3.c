#include<stdio.h>
/**
 *main - entry point
 *
 *Return: always 0
 */
int main(void)
{
	int x, y;

	for (x = 48; x <= 57; x++)
	{
	for (y = 48; y <= 57; y++)
	{
		if (x ==y || y <= x)
	{
	}
		else
	{
		putchar(x);
		putchar(y);
		if (x == 56 && y == 57)
	{
	}
		else
	{
		putchar(' , ');
		putchar(' ');
	}
	}
	}
	}
		putchar('\n');
	return (0);
}
