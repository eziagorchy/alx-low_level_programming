#include <stdio.h>
/**
  * main - Entry point of the program
  * Return: Always 0
  */
int main(void)
{
	int fi = 0;
	int sc = 0;
	int th = 0;
	int fr = 1;

	while (th < 10 && fr < 10)
	{
		putchar('0' + fi);
		putchar('0' + sc);
		putchar(' ');
		putchar('0' + th);
		putchar('0' + fr);

		if (!(fi == 9 && sc == 8 && th == 9 && fr == 9))
		{
			putchar(',');
			putchar(' ');
		}

		if (fr == 9 && th != 9)
		{
			th++;
			fr = 0;
			continue;
		}

		if (fr == 9 && th == 9)
		{
			sc++;
			th = fi;
			fr = sc + 1;
			continue;
		}

		if (sc == 9 && th == 9 && fr == 9)
		{
			fi++;
			sc = 0;
			th = fi;
			fr = th + 1;
			continue;
		}

		fr++;
	}
	putchar('\n');
	return (0);
}
