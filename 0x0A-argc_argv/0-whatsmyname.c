#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[0]);
		printf("\n");
	}

	return (0);
}
