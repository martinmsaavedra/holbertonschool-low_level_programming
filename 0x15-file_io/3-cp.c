#include "holberton.h"
#define BUFFER_SIZE 1024
/**
 *main - copies the content of a file to another file
 *@ac: argument count
 *@av: argument vector
 *Return: 1 on success, -1 on failure
 */
int main(int ac, char *av[])
{
	char *buffer;
	int fc1, fc2, fo1, fo2, fw;
	ssize_t numRead = 1;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fo1 = open(av[1], O_RDONLY);
	if (fo1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
		exit(98);
	}
	fo2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fo2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[2]);
		exit(99);
	}
	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (!buffer)
		return (0);

	while (numRead > 0)
	{
		numRead = read(fo1, buffer, BUFFER_SIZE);
		if (numRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
			exit(98);
		}
		if (numRead > 0)
		{
			fw = write(fo2, buffer, numRead);
			if (fw == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[2]);
				free(buffer);
				exit(99);
			}
		}
}
	fc1 = close(fo1);
	if (fc1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", fo1);
		exit(100);
	}
	fc2 = close(fo2);
	if (fc2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", fo2);
		exit(100);
	}
	free(buffer);
	return (1);
}
