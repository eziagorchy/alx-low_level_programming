#include "main.h"
/**
  * print_diagonal - Function name
  * @n: Function argument
  */
void print_diagonal(int n)
{
	int m = 0;
	int count;

	if (n <= 0)
		_putchar('\n');

	while (m < n)
	{
		count = 0;

		while (count < m)
		{
			_putchar(' ');
			count++;
		}
		_putchar('\\');
		_putchar('\n');
		m++;
	}
}
