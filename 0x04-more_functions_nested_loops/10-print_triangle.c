#include "main.h"
/**
  * print_triangle - Function name
  * @size: Function argument
  */
void print_triangle(int size)
{
	int hor;
	int vert = 0;

	if (size <= 0)
		_putchar('\n');

	while (vert < size)
	{
		hor = 0;

		while (hor <= vert)
		{
			_putchar('#');
			hor++;
		}
		_putchar('\n');
		vert++;
	}
}
