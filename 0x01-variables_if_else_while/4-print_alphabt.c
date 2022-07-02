#include <stdio.h>
/**
 *main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	char lower_case = 'a';

	while (lower_case <= 'z')
	{
		if (lower_case != 'e' && lower_case != 'q')
	{
		putchar(lower_case);
	}
		lower_case++;
	}
	putchar('\n');
	return (0);
}
