#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>

#define LENGTH 4096  // Length of the memory region to allocate

int main() {
    void *ptr;

    // Allocate memory using mmap
    ptr = mmap(NULL, LENGTH, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (ptr == MAP_FAILED) {
        perror("mmap");
        exit(EXIT_FAILURE);
    }

    printf("Memory mapped at address: %p\n", ptr);

    // Perform operations on the allocated memory

    // Unmap the memory region
    if (munmap(ptr, LENGTH) == -1) {
        perror("munmap");
        exit(EXIT_FAILURE);
    }

    printf("Memory unmapped successfully\n");

    return 0;
}
