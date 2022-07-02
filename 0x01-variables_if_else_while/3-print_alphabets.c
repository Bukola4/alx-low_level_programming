#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
		char ch;

		putchar("Uppercase characters : \n");

		for (ch = 'A'; ch <= 'Z'; ch++)
		{
			putchar("%c ", ch);
		}

		putchar("\nLowercase characters : \n");
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar("%c ", ch);
		}

		return (0);
}

	

