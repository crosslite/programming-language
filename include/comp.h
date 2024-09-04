#ifndef HEADER_comp
#define HEADER_comp

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VERSION "0.0"

static char *input_files_paths[32];
static FILE *input_files[32];
static int input_files_count;

static char *output_file_path;
static FILE *output_file;

extern int comp_main(int argc, char **argv);

extern int comp_init(int argc, char **argv);

extern void print_usage(void);

#endif /* HEADER_comp */
