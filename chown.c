#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    const char *file_path = "new_directory/example1.txt";
    uid_t new_owner_id = 1000; // UID of the new owner
    gid_t new_group_id = 1000; // GID of the new group

    // Change the owner and group of the specified file
    if (chown(file_path, new_owner_id, new_group_id) == -1) {
        perror("chown");
        exit(EXIT_FAILURE);
    }

    printf("Owner and group of '%s' changed successfully\n", file_path);

    return 0;
}
