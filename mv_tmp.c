#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <source> <destination>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    const char *source = argv[1];
    const char *destination = argv[2];

    if (rename(source, destination) == -1) {
        perror("Failed to move/rename");
        exit(EXIT_FAILURE);
    }

    printf("File or directory moved/renamed successfully.\n");
    exit(EXIT_SUCCESS);
}

