#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
    const char *file_path = "example1.txt";
    struct stat file_stat;

    // Retrieve information about the file
    if (stat(file_path, &file_stat) == -1) {
        perror("stat");
        exit(EXIT_FAILURE);
    }

    // Print file metadata
    printf("File: %s\n", file_path);
    printf("Size: %ld bytes\n", file_stat.st_size);
    printf("Permissions: %o\n", file_stat.st_mode & 0777); // Mask with 0777 to extract permission bits
    printf("Last access time: %ld\n", file_stat.st_atime);
    printf("Last modification time: %ld\n", file_stat.st_mtime);
    printf("Last status change time: %ld\n", file_stat.st_ctime);

    return 0;
}
