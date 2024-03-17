#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    int fd;

    // Open a file
    fd = open("exp.txt", O_RDONLY);
    if (fd == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    printf("File opened successfully\n");

    // Perform operations on the file (omitted in this example)

    // Close the file descriptor
    if (close(fd) == -1) {
        perror("close");
        exit(EXIT_FAILURE);
    }

    printf("File closed successfully\n");

    return 0;
}
