#include "main.h"
/**
  * more_numbers - Function name
  */
void more_numbers(void)
{
	int loop = 0;
	int num;

	while (loop < 10)
	{
		num = 0;
		while (num < 15)
		{
			if (num > 9)
				_putchar(1 + '0');
			_putchar(num % 10 + '0');
			num++;
		}
		loop++;
		_putchar('\n');
	}
}
