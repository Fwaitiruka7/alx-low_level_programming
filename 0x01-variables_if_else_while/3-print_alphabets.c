#include <stdio.h>

 /**
  * main -Prints the alphabets in lowercase and then in uppercase
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char lc;
	char uc;
	/* for loop to create lowercase alphabests */

	for (lc = 'a'; lc <= 'z'; lc++)
		putchar (lc);

	/* for loop to create uppercase alphabets */

	for (uc = 'A'; uc <= 'Z'; uc++)
		putchar (uc);

	putchar ('\n');
	return (0);
}
