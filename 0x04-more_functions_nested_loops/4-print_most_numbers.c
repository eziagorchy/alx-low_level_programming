#include "main.h"
/**
  * print_most_numbers - Function name
  */
void print_most_numbers(void)
{
	int num = 48;

	while (num < 58)
	{
		if (num == 50 || num == 52)
		{
			num++;
			continue;
		}
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
