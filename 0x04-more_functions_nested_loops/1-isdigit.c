#include "main.h"
/**
  * _isdigit - Fuction to check for digit
  * @c: Function argument
  * Return: Returns 1 or 0 depending on result
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
