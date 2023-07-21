#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and print it to STDOUT.
 * @filename: text file to read from
 * @letters: number of letters to read from the file
 * Return: the number of bytes read and printed
 *        0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_data;
	ssize_t words;
	ssize_t n;

	file_data = open(filename, O_RDONLY);
	if (file_data == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	n = read(file_data, buffer, letters);
	words = write(1, buffer, n);

	free(buffer);
	close(file_data);
	return (words);
}
