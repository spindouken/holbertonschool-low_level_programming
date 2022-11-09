#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: text file name
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success 
 * -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 * if filename is NULL return -1
 * Return 1 if the file already exists
 * Return -1 if the file does not exist or do not have permissions to write
 */

int append_text_to_file(const char *filename, char *text_content)
{
	
}