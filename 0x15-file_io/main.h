#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int _putchar(char c);
int create_file(const char *filename, char *text_content);

#endif /*MAIN_H*/
