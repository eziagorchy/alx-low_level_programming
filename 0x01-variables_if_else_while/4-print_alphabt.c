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
		putchar (a);
		if (a == 'q' || a == 'e')
			continue;
		a++;
	}
	putchar('\n');
	return (0);
}
