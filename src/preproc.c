#include "comp.h"
#include "preproc.h"

int preproc_main(FILE **input_files, FILE *output_file)
{
        input_bytes_count = 0;

        for (int i = 0; !feof(input_files[0]); ++i)
                fread(buff_1+i, sizeof(buff_1[i]), 1, input_files[0]);

        // for (int i = 0; buff_1[i] != EOF; ++i)
        //         ++input_bytes_count;

        fwrite(buff_1, sizeof(char), 1024, output_file);
        return 0;
}
