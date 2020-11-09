#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
/**
 *read_textfile - reads a text file and prints it to the POSIX std out
 *@filename: text file
 *@letters: number of letters should print
 *Return: number of letters printed
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo, fr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	fo = open(filename, O_RDONLY);
	if (fo == -1)
		return (0);

	fr = read(fo, buf, letters);

	write(STDOUT_FILENO, buf, fr);

	buf[fr + 1] = '\0';
	close(fo);
	return (fr);
}
