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
	int i, n;
	int m;
	int j;
	int count = 0;
	char *buffer = b;

	if (size > 0)
	{
		for (i = 0; i < size; i = i + 10)
		{
			printf(" %08x: ", count);
			if (!(size - count < 10))
			{
				for (m = 0; m < 9; m++)
			{
				if (m % 2 == 0)
					printf("%02x%02x ", buffer[i + m], buffer[i + (m + 1)]);
			}
			for (j = count; j < count + 10; j++)
			{
				if (isprint(buffer[j]))
					printf("%c", buffer[j]);
				else
					putchar(46);
			}}
			if (size - count < 10)
			{
				for(m = 0; m < (size - count); m++)
				{
					if (m % 2 == 0)
						printf("%02x%02x ", buffer[i + m], buffer[i + (m + 1)]);
				}
				for (n = 0; n <= (((size - count) / 2) + 1); n++)
				{
					printf("  ");
				}
				for (j = count; j < ((count + 10) - (10 - (size - count))); j++)
				{
				if (isprint(buffer[j]))
					printf("%c", buffer[j]);
				else
					putchar(46);
				}}
			count += 10;
			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
}
