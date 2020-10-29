#include <stdio.h>

/**
 * before - function executed before main
 *
 */

void __attribute__ ((constructor)) before()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
