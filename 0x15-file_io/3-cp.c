#include "holberton.h"
/**
 *main - copies the content of a file to another file
 *@ac: argument count
 *@av: argument vector
 *Return: 1 on success, -1 on failure
 */
int main(int ac, char **av)
{
	char buffer[1024];
	int fc1, fc2, fo1, fo2;
	int numRead = 1;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fo1 = open(av[1], O_RDONLY);
	if (fo1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fo2 = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fo2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(99);
	}
	while ((numRead = read(fo1, buffer, 1024)) > 0)
	{
		if (write(fo2, buffer, numRead) != numRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			close(fo1);
			exit(99);
		}
	}
	if (numRead < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fc1 = close(fo1);
	if (fc1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fc1);
		exit(100);
	}
	fc2 = close(fo2);
	if (fc2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fc2);
		exit(100);
	}
	return (0);
}
