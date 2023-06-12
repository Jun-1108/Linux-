#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    const char *filename = argv[1];

    if (remove(filename) == -1) {
        perror("Failed to remove file");
        exit(EXIT_FAILURE);
    }

    printf("File or directory removed successfully.\n");
    exit(EXIT_SUCCESS);
}

