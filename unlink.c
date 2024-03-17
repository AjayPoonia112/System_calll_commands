#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    const char *file_path = "new_directory/example1.txt";

    // Remove the specified file
    if (unlink(file_path) == -1) {
        perror("unlink");
        exit(EXIT_FAILURE);
    }

    printf("File '%s' removed successfully\n", file_path);

    return 0;
}
