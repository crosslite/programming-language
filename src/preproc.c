#include "comp.h"
#include "preproc.h"

int preproc_main(FILE **input_files, FILE *output_file)
{
        input_bytes_count = 0;

        fseek(input_files[0], 0, SEEK_END);

        int fsize = ftell(input_files[0]);

        fseek(input_files[0], 0, SEEK_SET);

        fread(buff_1, fsize, 1, input_files[0]);

        fwrite(buff_1, sizeof(char), fsize, output_file);

        return 0;
}
