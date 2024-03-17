#include <stdio.h>
#include <unistd.h>

int main() {
    // Define the program name and arguments
    char *args[] = {"fork", "-l", NULL};

    // Execute the program using execv
    if (execv("fork", args) == -1) {
        perror("execv failed");
        return 1;
    }

    // This line will only be reached if execv fails
    printf("This line will not be executed\n");

    return 0;
}
