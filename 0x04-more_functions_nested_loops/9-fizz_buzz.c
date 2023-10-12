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
		printf("%d ", num);
		num++;
	}
	return (0);
}
