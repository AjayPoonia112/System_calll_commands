#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    int fd;
    struct stat file_stat;

    // Open a file
    fd = open("example1.txt", O_RDONLY);
    if (fd == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    // Retrieve information about the file using fstat()
    if (fstat(fd, &file_stat) == -1) {
        perror("fstat");
        exit(EXIT_FAILURE);
    }

    // Print file metadata
    printf("File size: %ld bytes\n", file_stat.st_size);
    printf("File permissions: %o\n", file_stat.st_mode & 0777); // Mask with 0777 to extract permission bits

    // Close the file descriptor
    if (close(fd) == -1) {
        perror("close");
        exit(EXIT_FAILURE);
    }

    return 0;
}
