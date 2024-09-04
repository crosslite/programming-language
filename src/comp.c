#include "comp.h"

int comp_main(int argc, char **argv)
{
        comp_init(argc, argv);
        return 0;
}

int comp_init(int argc, char **argv)
{
        --argc; ++argv;

        for (int i = 0; i < argc; ++i) {
                if (!strcmp(argv[i], "--help")) {
                        print_usage();
                        exit(0);
                }

                if (!strcmp(argv[i], "--version")) {
                        printf("compiler %s\n", VERSION);
                        exit(0);
                }
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
