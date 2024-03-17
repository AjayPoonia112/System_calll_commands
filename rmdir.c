#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    const char *dir_name = "new_directory";

    // Remove the empty directory
    if (rmdir(dir_name) == -1) {
        perror("rmdir");
        exit(EXIT_FAILURE);
    }

    printf("Directory '%s' removed successfully\n", dir_name);

    return 0;
}
