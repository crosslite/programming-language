#include "comp.h"

int comp_main(int argc, char **argv)
{
        comp_init(argc, argv);

        printf("%s\n", output_file_path);
        printf("%s\n", input_files_paths[0]);
        printf("%s\n", input_files_paths[1]);
        printf("%s\n", input_files_paths[2]);

        return 0;
}

int comp_init(int argc, char **argv)
{
        --argc; ++argv;

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
