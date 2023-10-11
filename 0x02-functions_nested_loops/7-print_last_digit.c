#include "main.h"
/**
 * print_last_digit - Entry point
 * @num: Number
 * Return: 1
 */
int print_last_digit(int num)

{
	num = num % 10;
	_putchar(num + '0');
	return (num);
}
