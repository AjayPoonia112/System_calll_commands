#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/select.h>
#include <fcntl.h>

int main() {
    int fd;
    fd_set readfds;
    struct timeval timeout;
    int retval;

    // Open a file descriptor (replace "exp1.txt" with your file)
    fd = open("exp1.txt", O_RDONLY);
    if (fd == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    // Initialize the set of file descriptors to monitor
    FD_ZERO(&readfds);
    FD_SET(fd, &readfds);

    // Set the timeout (5 seconds)
    timeout.tv_sec = 5;
    timeout.tv_usec = 0;

    // Wait for activity on the file descriptor
    retval = select(fd + 1, &readfds, NULL, NULL, &timeout);
    if (retval == -1) {
        perror("select");
        exit(EXIT_FAILURE);
    } else if (retval == 0) {
        printf("Timeout occurred\n");
    } else {
        printf("Data is available to read\n");
    }

    // Close the file descriptor
    close(fd);

    return 0;
}
S
