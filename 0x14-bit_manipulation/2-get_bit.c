#include "holberton.h"
/**
 *get_bit - returns the value of a bit at a given index
 *@n: integer given
 *@index: index of the integer in binary
 *Return: value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int len = 1;
	unsigned long int *pn = &len;

	if (n == 0 && index > 0)
		return (-1);
	len_binary(n, pn);
	if (index > (len - 1))
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);

}
/**
 *len_binary - lenght of binary number
 *@n: integer to convert
 *@pn: pointer to len
 */
void len_binary(unsigned long int n, unsigned long int *pn)
{
	if (n >> 1)
		len_binary(n >> 1, pn);
	*pn += 1;
}
