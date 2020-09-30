#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - generates a password
 *
 *Return: 0 on success
 **/

int main(void)
{
	int i = 0;
	int contador = 2772;
	int letra;
	char pass[100];

	srand(time(NULL));

	while (contador > 127)
	{
		letra = (rand() % 94) + 33;
		pass[i] = letra;
		contador = contador - pass[i];
		i++;
	}
	pass[i] = contador;
	pass[i++] = '\0';
	printf("%s\n", pass);
	return (0);
}
