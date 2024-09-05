#include "comp.h"
#include "preproc.h"

int preproc_main(FILE **input_files, FILE *output_file)
{
        input_bytes_count = 0;

        fseek(input_files[0], 0, SEEK_END);

        int fsize = ftell(input_files[0]);

        fseek(input_files[0], 0, SEEK_SET);

        fread(buff_1, fsize, 1, input_files[0]);

        for (int i = 0, k = 0; i < fsize; ++i) {
                if (buff_1[i] == '\n' || buff_1[i] == ' ')
                        continue;
                buff_2[k] = buff_1[i];
                ++k;
        }

        fwrite(buff_2, sizeof(char), strlen(buff_2), output_file);

        return 0;
}
