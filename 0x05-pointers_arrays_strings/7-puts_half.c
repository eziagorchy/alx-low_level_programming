#include "main.h"
#include "2-strlen.c"
/**
  * puts_half - Function name
  * @str: Pointer to string parameter
  * Return: Nothing
  */
void puts_half(char *str)
{
	int len = _strlen(str);
	int middle;
	int index;

	if (len % 2 != 0)
		middle = (len - 1) / 2;
	else
		middle = len / 2;

	index = middle;
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
