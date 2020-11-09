#include "holberton.h"
#define BUFFER_SIZE 1024
int main(int ac, char *av[])
{
	char *buffer;
	int fc, fo1, fo2, fw;
	ssize_t numRead;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fo1 = open(av[1], O_RDONLY);
	fo2 = open(av[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (!fo1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
		exit (98);
	}
	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (!buffer)
		return (1);
	numRead = read(fo1, buffer, BUFFER_SIZE);
	if (!(numRead))
	{
                dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
                exit (98);
        }
	while (numRead > 0)
	{
		fw = write(fo2, buffer, numRead);
		if (!fw)
			return (-1);
	}
	fc = close(fo1);
	if (fc == -1)
		exit(100);
	fc = close(fo2);
	if (fc == -1)
		exit(100);
	free(buffer);
return (1);

}
