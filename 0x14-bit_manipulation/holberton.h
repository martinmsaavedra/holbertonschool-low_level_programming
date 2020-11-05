#ifndef HOLBIE_H
#define HOLBIE_H
#include <stdio.h>
#include <stdlib.h>
unsigned int binary_to_uint(const char *b);
int _putchar(char c);
void print_binary(unsigned long int n);
void len_binary(unsigned long int n, unsigned long int *);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
#endif
