#include "main.h"

/**
 * print_numbee - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int nos = n;

	if (n < 0)
	{
		_putchar('-');
		nos = -nos;
	}

	if ((nos / 10) > 0)
		print_number(nos / 10);

	_putchar((nos % 10) + '0');
}

