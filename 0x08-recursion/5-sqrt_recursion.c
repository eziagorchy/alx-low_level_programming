#include "main.h"
/**
  * _sqrt_recursion - Function name
  * @n: Integar parameter
  * Return: Integar value
  */
int _sqrt_recursion(int n)
{
	double ff;
	double number;
	int num;

	if (n < 0)
		return (-1);
	ff = (double) n;
	number = helper(n, ff);
	num = (int) number;
	if (number - num > 0.000000000001)
		return (-1);
	return (num);
}
/**
  * helper - Function name
  * @n: First argument
  * @x: Second double argument
  * Return: Double
  */
double helper(int n, double x)
{
	double buffer = 0.0000000000001;

	if ((x * x) - n > buffer)
		return (helper(n, (x + (n / x)) / 2));
	return (x);
}
