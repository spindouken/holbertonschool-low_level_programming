#include "main.h"

/**
 * create_file - creates a file
 * @filename: text file name
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 * if filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	int newfile, length = 0;
	text_content = 

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		while (text_content[length])
			length++;
	}

	newfile = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	if (newfile == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(newfile);
		return (-1);
	}
	else
		write(newfile, text_content, length);

	close(newfile);
	return (1);
}
