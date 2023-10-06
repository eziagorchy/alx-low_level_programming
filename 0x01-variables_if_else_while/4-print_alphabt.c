#include <stdio.h>
/**
  * main - Entry point of program
  * Return: Would return 0
  */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
			continue;
		putchar (a);
		a++;
	}
	putchar('\n');
	return (0);
}
