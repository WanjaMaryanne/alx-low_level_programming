#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename:  name of the file
 * @text_content: NULL terminated string to add at the end of
 * the file.
 *
 * Return: if NULL, -1, 1 if the file exists
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filecreate, len, filewrite;

	len = 0;

	if (filename == NULL)
		return (-1);

	filecreate = open(filename, O_WRONLY | O_APPEND);

	if (filecreate == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		filewrite = write(filecreate, text_content, len);

		if (filewrite == -1)
			return (-1);
	}
	close(filecreate);
	return (1);
}
