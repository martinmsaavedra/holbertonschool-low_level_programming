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
	int contador = 0;
	int letra;
	char pass[100];
	int resto;

	srand(time(NULL));

	while (contador < 2645)
	{
		letra = (rand() % 25) + 97;
		pass[i] = letra;
		contador = contador + pass[i];
		i++;
	}
	resto = 2772 - contador;
	pass[i++] = resto;
	pass[i++] = '\0';
	printf("%s\n", pass);
return (0);
}
