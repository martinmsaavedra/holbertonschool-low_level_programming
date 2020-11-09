#include "holberton.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 *read_textfile - reads a text file and prints it to the POSIX std out
 *@filename: text file
 *@letters: number of letters should print
 *Return: number of letters prited
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo, fw, fr;
	char *buf;

	if (!filename)
		return (0);

	fo = open(filename, O_RDONLY);
	if (fo == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	fr = read(fo, buf, letters);

	fw = write(STDOUT_FILENO, buf, letters);

	if (fr == fw)
		return (0);
	close(fd);

	return (fw);
}
