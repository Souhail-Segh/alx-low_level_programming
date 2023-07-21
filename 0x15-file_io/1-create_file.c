#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write into the file.
 *
 * Return: 1 if success, -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int f, words, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	words = write(f, text_content, len);

	if (f == -1 || words == -1)
		return (-1);

	close(f);

	return (1);
}
