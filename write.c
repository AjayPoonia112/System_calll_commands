#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 4096

int main() {
    int fd, num_bytes_written;
    char buffer[BUFFER_SIZE] = "Hello, world!\n";

    // Open a file
    fd = open("example1.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    printf("File opened successfully\n");

    // Write data from the buffer to the file
    num_bytes_written = write(fd, buffer, sizeof(buffer));
    if (num_bytes_written == -1) {
        perror("write");
        exit(EXIT_FAILURE);
    }

    printf("Wrote %d bytes to the file\n", num_bytes_written);

    // Close the file descriptor
    if (close(fd) == -1) {
        perror("close");
        exit(EXIT_FAILURE);
    }

    return 0;
}
