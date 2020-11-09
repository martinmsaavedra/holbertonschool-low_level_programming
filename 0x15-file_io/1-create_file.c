#include "holberton.h"
/**
 *create_file - create a file wit text_content
 *@filename: name of new file
 *@text_content: text inside new file
 *Return: 1 on success, -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int fo, i = 0;

	if (!filename)
		return (-1);

	fo = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fo == -1)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	if (i != 0)
		write(fo, text_content, i);
	else
		fo = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	close(fo);
	return (1);
}
