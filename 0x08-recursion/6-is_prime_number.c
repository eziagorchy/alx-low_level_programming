#include "main.h"
/**
  * is_prime_number - Function name
  * @n: Integar parameter
  * Return: Integar value
  */
int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	return (primehelp(n, n / 2));
}
/**
  * primehelp - Helper function name
  * @n: Number to check
  * @start: Starting point
  * Return: Return type int
  */
int primehelp(int n, int start)
{
	double num;

	num = (double) n / start;

	if (num - (int)num == 0)
		return (0);
	if (start  == 2)
		return (1);
	return (primehelp(n, start - 1));
}
