#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	char *a = "Fizz";
	char *b = "Buzz";
	char *c = "FizzBuzz";

	for (x = 1; x <= 100; x++)
	{
		if (x == 100)
		{
			printf("%s", b);
		}
		else if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("%s ", c);
		}
		else if (x % 3 == 0)
		{
			printf("%s ", a);
		}
		else if (x % 5 == 0)
		{
			printf("%s ", b);
		}
		else
		{
			printf("%d ", x);
		}
	}
	printf("\n");
	return (0);
}
