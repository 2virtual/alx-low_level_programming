#include <stdio.h>

/**
 * main - Program to print the letters of the alphabet
 *
 * Description: This program prints the letters of the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
