#include<stdio.h>
/**
 *main - entry point
 *
 *Return: always 0
 */
int main(void)
{
	int single_digit;

	for (single_digit = 48; single_digit < 58; single_digit++)
	{
		putchar(single_digit);
		if (single_digit != 57)
	{
		putchar(',');
		putchar(' ');
	}
	}
		putchar('\n');
	return (0);
}
