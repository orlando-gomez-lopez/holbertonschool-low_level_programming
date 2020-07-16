#include "holberton.h"
/**
 * read_textfile - read a text file
 * @filename: the name of the file
 * @letters: number of letters
 * Return: number of letters
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, amount_str = 0, count;
	void *strings;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY | S_IRUSR);
	if (fp == -1)
		return (0);
	if (fp != -1)
	{
		strings = malloc(letters);
		if (strings == NULL)
			return (0);
		amount_str = read(fp, strings, letters);
		if (amount_str < 0)
		{
			free(strings);
			close(fp);
			return (0);
		}
		count = write(STDOUT_FILENO, strings, amount_str);
		if (count >= 0)
		{
			free(strings);
			close(fp);
			return (count);
		}
		if (count < 0)
		{
			free(strings);
			close(fp);
			return (0);
		}
	}
	free(strings);
	close(fp);
	return (0);
}
