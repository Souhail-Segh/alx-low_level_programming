#include "main.h"

/**
 * append_text_to_file - Appends text at the end of file
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, word, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	f = open(filename, O_WRONLY | O_APPEND);
	word = write(f, text_content, len);

	if (f == -1 || word == -1)
		return (-1);

	close(f);

	return (1);
}
