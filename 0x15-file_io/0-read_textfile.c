#include "main.h"

/*
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text file name
 * @letters: the number of letters to read and print
 * Return: number of letters the function read and printed
 * if the file cannot be opened or read return 0
 * if file name is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int targetfile, readfile, writefile;
	char *filetext;


	if (filename == NULL)
		return (0);
	filetext = malloc(letters);
	targetfile = open(filename, O_RDONLY);
	if (targetfile == -1)
		return (0);
	if (filetext == NULL)
		return (0);
	readfile = read(targetfile, filetext, letters);
	if (readfile == -1)
		return (0);
	writefile = write(STDOUT_FILENO, filetext, readfile);
	if (writefile == -1)
		return (0);

	free(filetext);
	close(targetfile);
	return (writefile);
}
