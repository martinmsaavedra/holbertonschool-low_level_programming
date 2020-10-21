#include <stdio.h>
#include <stdlib.h>
/**
 *main -  prints the opcodes of its own main function
 *@argc: argument count
 *@argv: argument vector
 *Return: print codes
 */
int main(int argc, char *argv[])
{
	int byte = atoi(argv[1]);
	unsigned char *p = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	int i;

	for (i = 0; i < byte; i++, p++)
	{
		printf("%02x", *p);
		if (i != (byte - 1))
			printf(" ");
	}
	printf("\n");
	return (0);
}
