#include <stdio.h>
/**
  * main - Entry point of program
  * Return: Outputs 0
  */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');
	return (0);
}
