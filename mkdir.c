#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() {
    const char *dir_name = "new_directory";
    mode_t mode = 0777; // Permissions for the new directory

    // Create a new directory
    if (mkdir(dir_name, mode) == -1) {
        perror("mkdir");
        exit(EXIT_FAILURE);
    }

    printf("Directory '%s' created successfully\n", dir_name);

    return 0;
}
