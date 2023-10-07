#include <stdio.h>
/**
  * main - Entry point of the program
  * Return: Always 0
  */
int main(void)
{
	int start = 0;
	int mid = 1;
	int next = 2;

	while (mid < 9 && next < 10)
	{
		putchar('0' + start);
		putchar('0' + mid);
		putchar('0' + next);

		if (!(start == 7 && mid == 8 && next == 9))
		{
			putchar(',');
			putchar(' ');
		}

		if (next == 9 && mid != 8)
		{
			mid++;
			next = mid + 1;
			continue;
		}
		if (mid == 8 && next == 9)
		{
			start++;
			mid = start + 1;
			next = mid + 1;
			continue;
		}
		next++;
	}
	putchar('\n');
	return (0);
}
