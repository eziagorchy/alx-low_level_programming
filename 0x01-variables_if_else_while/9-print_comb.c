#include <stdio.h>
/**
  * main - Entry point of the program
  * Return: Outputs 0
  */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num == 9)
			putchar('0' + num);
		putchar('0' + num);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
