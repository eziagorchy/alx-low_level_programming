#include <stdio.h>
/**
  * main - Entry point of the program
  * Return: Outputs 0;
  */
int main(void)
{
	int num = 0;
	char letters = 'a';

	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
