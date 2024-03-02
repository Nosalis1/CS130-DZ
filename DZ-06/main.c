#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    FILE *f = NULL;

    if (argc != 2) {
        printf("Enter file name: ");
        char input[1000];
        gets_s(input, 1000);

        if (!strstr(input, ".c")) {
            printf((const char *) stderr, "Invalid file name!\n");
            return EXIT_FAILURE;
        }

        printf("Opening %s\n", input);
        f = fopen(input, "r");
    } else {
        if (!strstr(argv[1], ".c")) {
            printf((const char *) stderr, "Invalid file name!\n");
            return EXIT_FAILURE;
        }

        printf("Opening %s\n", argv[1]);
        f = fopen(argv[1], "r");
    }

    if (!f) {
        printf("Failed to open file!\n");
        return EXIT_FAILURE;
    }

    int open_brackets = 0;
    int close_brackets = 0;

    int _char = 0;
    while ((_char = fgetc(f)) != EOF) {
        if (_char == '{') {
            open_brackets++;
        } else if (_char == '}') {
            close_brackets++;
        }
    }

    fclose(f);

    if (open_brackets == close_brackets)
        printf("Count of open and close brackets is equal\n");
    else
        printf("Count of open and close brackets is NOT equal\n");

    return 0;
}