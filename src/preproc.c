#include "comp.h"
#include "preproc.h"

int preproc_main(void)
{
        fread(buff_1, sizeof(char), 1024, input_files[0]);

        fwrite(buff_2, sizeof(char), 1024, output_file);

        return 0;
}
