#include "holberton.h"
#include <stdio.h>
#include <ctype.h>
/**
 *print_buffer - print buffer
 *@b: string
 *@size: buffer size
 */
void print_buffer(char *b, int size)
{
	int i;
	int j;
	int count = 0;
	char *buffer = b;

	if (size > 0)
	{
		for (i = 0; i < size; i = i + 10)
		{
			printf(" %08x: ", count);
			printf("%02x%02x ", buffer[i], buffer[i + 1]);
			printf("%02x%02x ", buffer[i + 2], buffer[i + 3]);
			printf("%02x%02x ", buffer[i + 4], buffer[i + 5]);
			printf("%02x%02x ", buffer[i + 6], buffer[i + 7]);
			printf("%02x%02x ", buffer[i + 8], buffer[i + 9]);
			for (j = count; j < count + 10; j++)
			{
				if (isprint(buffer[j]))
				{
					printf("%c", buffer[j]);
				}
				else
				{
					putchar(46);
				}
			}
			count += 10;
			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
}
