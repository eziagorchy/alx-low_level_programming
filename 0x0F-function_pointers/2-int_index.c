#include <stdlib.h>
#include "function_pointers.h"
/**
  * int_index - Functin name
  * @array: Array of integars to loop through
  * @size: Size of array
  * @cmp: Function pointer that aceepts int and returns int
  * Return: Integar return type
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if ((array != NULL) && (cmp != NULL))
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
