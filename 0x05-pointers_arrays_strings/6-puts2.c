#include "main.h"
/**
  * puts2 - Function name
  * @str: Pointer to a string parameter
  * Return: Nothing
  */
void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (index % 2 == 0)
			_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
