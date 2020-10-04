#include "holberton.h"
#include <stdio.h>
#include <ctype.h>
/**
 *
 *
 */

void print_buffer(char *b, int size)
{
	int i;
	int j;
	int count = 0;
	char *buffer = b;
	if ( size > 0) {

for ( i = 0; i < size; i = i + 10)
	{
		// Output the offset.
		printf(" %08x: ", count);

		if (buffer[i] >= 0 && buffer[i] <= 32)
		{
			buffer[i] = '.';
		}
		    if(buffer[i] >= 33 && buffer[i] <= 255 || buffer[i] != 00)
		{
			printf("%02x%02x %02x%02x %02x%02x %02x%02x %02x%02x ",
			       buffer[i], buffer[i + 1], buffer[i + 2], buffer[i + 3], 
			       buffer[i + 4], buffer[i + 5], buffer[i + 6], buffer[i + 7], 
			       buffer[i + 8], buffer[i + 9]);
		}
		if(buffer[i] == 00)
		{
			printf("00");
		}
		for (j = count; j < count + 10; j++)
		{
			printf("%c", buffer[j]);
		}
		count += 10;
		printf("\n");
	}
	}
	else
		printf("\n");
}
