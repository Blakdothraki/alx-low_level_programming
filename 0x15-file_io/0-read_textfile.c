#include "main.h"

/**
 * read_textfile - function name
 * @filename: first parameter
 * @letters: second parameter
 *
 * Description: reads a text file and prints it to the POSIX
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, reads;
	char *buff = malloc(sizeof(char *) * letters);
	
	if (!buff | !filename)
		return (0);

	fp = open(filename, O_RDONLY, 0600);
	
	if (fp == -1)
		return (0);

    reads = read(fp, buff, letters);
	write(STDOUT_FILENO, buff, reads);

	free(buff);
	close(fp);
	return (reads);
}


