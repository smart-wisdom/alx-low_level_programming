#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer the name of the file
 * @text_content: terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file
 * Return 1 if the file exists and -1 if the file does not exist or
 * if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	wr = write(o, text_content, length);

	if (o == -1 || wr == -1)
		return (-1);

	close(o);

	return (1);
}
