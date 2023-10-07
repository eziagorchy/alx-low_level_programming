#include <stdio.h>
/**
  * main - Entry point of the program
  * Return: Always 0
  */
int main(void)
{
	int start = 0;
	int next = 1;

	while (next < 10)
	{
		putchar('0' + start);
		putchar('0' + next);
		if (start != 8 && next != 9)
		{
			putchar(',');
			putchar(' ');
		}
		if (next == 9)
		{
			start++;
			next = start + 1;
			continue;
		}
		next++;
	}
	putchar('\n');
	return (0);
}
