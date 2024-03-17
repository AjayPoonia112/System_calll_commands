#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    int fd, new_fd;

    // Open a file for writing
    fd = open("output.c", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    // Duplicate the file descriptor
    new_fd = dup(fd);
    if (new_fd == -1) {
        perror("dup");
        exit(EXIT_FAILURE);
    }

    // Write to the original file descriptor
    dprintf(fd, "Original file descriptor\n");

    // Write to the duplicated file descriptor
    dprintf(new_fd, "Duplicated file descriptor\n");

    // Close the original file descriptor
    close(fd);

    // Close the duplicated file descriptor
    close(new_fd);

    return 0;
}
