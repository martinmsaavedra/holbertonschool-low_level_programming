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
	unsigned char *p = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	int i = 0;

	while (i < (atoi(argv[1]) - 1))
	{
		printf("%02x ", *p);
		i++;
		p++;
	}
	p++;
	printf("%02x\n", *p);
	return (0);
}
