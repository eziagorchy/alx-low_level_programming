#include <stdio.h>
/**
  * main - Entry point
  * Return: Always 0
  */
int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
			num++;
			continue;
		}
		if (num % 5 == 0)
		{
			printf("Buzz ");
			num++;
			continue;
		}
		if (num % 3 == 0)
		{
			printf("Fizz ");
			num++;
			continue;
		}
		if (num < 100)
		{
			printf("%d ", num);
			num++;
		}
		else
		{
			printf("%d", num);
		}
	}
	printf("\n");
	return (0);
}
