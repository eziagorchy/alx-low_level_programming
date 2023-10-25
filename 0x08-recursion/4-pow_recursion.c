#include "main.h"
/**
  * _pow_recursion - Function name
  * @x: First integar argument
  * @y: Second integar argument
  * Return: return integar
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * (_pow_recursion(x, y - 1)));
}
