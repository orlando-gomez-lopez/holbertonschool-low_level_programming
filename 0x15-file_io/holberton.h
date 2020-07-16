#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <fcntl.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/*
 * Structs, enums and unions definitions
 * Typedefs
 * prototypes
 */

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* _HOLBERTON_H_ */
