#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int _putchar(char c);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int main(int argc, char **argv);
void error_98(int fd, char *buffer, char *argv);
void error_99(int fd, char *buffer, char *argv);
void error_100(int fd, char *buffer);
void check_elf(unsigned char *c_indent);
void print_magic(unsigned char *c_indent);
void print_class(unsigned char *e_indentity);
void print_data(unsigned char *e_indentity);
void print_version(unsigned char *e_indentity);
void print_abi(unsigned char *e_indentity);
void print_osabi(unsigned char *e_indentity);
void print_type(unsigned int e_type, unsigned char *e_indentity);
void print_entry(unsigned long int entry, unsinged char *e_identity);
void close_elf(int elf);

#endif
