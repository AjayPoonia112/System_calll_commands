#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    const char *new_directory = "new_directory";

    // Change the current working directory
    if (chdir(new_directory) == -1) {
        perror("chdir");
        exit(EXIT_FAILURE);
    }

    printf("Current working directory changed to: %s\n", new_directory);

    return 0;
}
