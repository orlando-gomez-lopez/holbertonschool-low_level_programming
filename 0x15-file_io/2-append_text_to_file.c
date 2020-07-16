#include "holberton.h"
/**
 * append_text_to_file - append text to a file
 * @filename: the name of the file
 * @text_content: content for the file
 * Return: 1 if succeed if not -1
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int i, fp, check;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (i = 0; text_content[i] != '\0'; )
		i++;
	check = write(fp, text_content, i);
	if (check == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
