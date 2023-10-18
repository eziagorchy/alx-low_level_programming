#include "main.h"
/**
  * swap_int - Function name
  * @a: First int pointer parameter
  * @b: Second int pointer parameter
  * Return: Nothing
  */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
