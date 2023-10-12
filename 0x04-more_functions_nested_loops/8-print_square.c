#include "main.h"
/**
  * print_square - Function name
  * @size: Function argument
  */
void print_square(int size)
{
	int hor;
	int vert = 0;

	if (n <= 0)
		_putchar('\n');

	while (vert < size)
	{
		hor = 0;

		while (hor < size)
		{
			_putchar('#');
			hor++;
		}
		_putchar('\n');
		vert++;
	}
}
