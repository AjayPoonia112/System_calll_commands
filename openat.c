#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int dirfd, fd;

    // Open a directory
    dirfd = open("direc1/direct2", O_RDONLY);
    if (dirfd == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    // Open or create a file relative to the directory
    fd = openat(dirfd, "example.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("openat");
        exit(EXIT_FAILURE);
    }

    printf("File opened or created successfully\n");

    // Close the file descriptor and directory descriptor
    close(fd);
    close(dirfd);

    return 0;
}
