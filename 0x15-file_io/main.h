#ifndef _FILE_IO
#define _FILE_IO

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/uio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int _strlen(char *s);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void copy_file(const char *src, const char *dest);

#endif /* MAIN_H */

