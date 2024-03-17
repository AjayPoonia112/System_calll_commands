#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = getpid();
    printf("Process ID: %d\n", pid);
    return 0;
}
