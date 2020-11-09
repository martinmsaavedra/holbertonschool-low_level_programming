#include "holberton.h"
/**
 *append_text_to_file - append text_content to filename
 *@filename: name of file
 *@text_content: text inside file
 *Return: 1 on success, -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fd, i = 0;

	if (!filename)
		return (-1);

	fo = open(filename, O_APPEND | O_WRONLY);
	if (fo == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
		fd = write(fo, text_content, i);
		if (fd == -1)
			return (-1);
	}
	close(fo);
	return (1);
}
