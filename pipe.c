#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int pipefd[2];
    pid_t pid;
    char buffer[20];

    // Create a pipe
    if (pipe(pipefd) == -1) {
        perror("pipe");
        exit(EXIT_FAILURE);
    }

    // Fork a child process
    pid = fork();

    if (pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        // Child process: Reads from the pipe
        close(pipefd[1]);  // Close write end of the pipe
        read(pipefd[0], buffer, sizeof(buffer));
        printf("Child process received: %s\n", buffer);
        close(pipefd[0]);  // Close read end of the pipe
        exit(EXIT_SUCCESS);
    } else {
        // Parent process: Writes to the pipe
        close(pipefd[0]);  // Close read end of the pipe
        write(pipefd[1], "Hello from parent", 17);
        close(pipefd[1]);  // Close write end of the pipe
        wait(NULL);  // Wait for the child to finish
    }

    return 0;
}
