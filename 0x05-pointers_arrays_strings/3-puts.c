#include "main.h"
/**
  * _puts - Function name
  * @str: Pointer to a string parameter
  * Return: Nothing
  */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
