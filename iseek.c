#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 4096

int main() {
    int fd, num_bytes_read;
    char buffer[BUFFER_SIZE + 1]; // Extra byte for null terminator

    // Open a file
    fd = open("example1.txt", O_RDONLY);
    if (fd == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    printf("File opened successfully\n");

    // Move the file pointer to a specific position (e.g., 10 bytes from the beginning)
    if (lseek(fd, 10, SEEK_SET) == -1) {
        perror("lseek");
        exit(EXIT_FAILURE);
    }

    // Read data from the file into the buffer
    num_bytes_read = read(fd, buffer, BUFFER_SIZE);
    if (num_bytes_read == -1) {
        perror("read");
        exit(EXIT_FAILURE);
    }

    // Null-terminate the buffer to use it as a string
    buffer[num_bytes_read] = '\0';

    printf("Read %d bytes starting from position 10: %s\n", num_bytes_read, buffer);

    // Close the file descriptor
    if (close(fd) == -1) {
        perror("close");
        exit(EXIT_FAILURE);
    }

    return 0;
}
