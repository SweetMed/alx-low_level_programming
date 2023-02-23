#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the charachter_ chould be printed
 */
void print_line(int n)
{
	for (int i = 0; i < n; i++)
	{
		_putchar('_');
	}

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
}
