#include "comp.h"
#include "preproc.h"

int comp_main(int argc, char **argv)
{
        comp_init(argc, argv);

        for (int i = 0; i < input_files_count; ++i)
                input_files[i] = fopen(input_files_paths[i], "r");

        output_file = fopen(output_file_path, "w");

        preproc_main(input_files, output_file);

        return 0;
}

int comp_init(int argc, char **argv)
{
        --argc; ++argv;
        input_files_count = 0;

        for (int i = 0, k = 0; i < argc; ++i) {
                if (!strcmp(argv[i], "--help")) {
                        print_usage();
                        exit(0);
                }

                if (!strcmp(argv[i], "--version")) {
                        printf("compiler %s\n", VERSION);
                        exit(0);
                }

                if (!strcmp(argv[i], "-o")) {
                        output_file_path = argv[++i];
                        continue;
                }

                input_files_paths[k] = argv[i];
                ++input_files_count;
                ++k;
        }
}

void print_usage(void)
{
        printf(
                "Usage: compiler [options] file...\n"
                "Options:\n"
                "--help    Display this information.\n"
                "--version Display compiler version information.\n"
                "-o <file> Place the output into <file>.\n"
        );
}
