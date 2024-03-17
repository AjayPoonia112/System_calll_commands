#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Before exit\n");
    exit(EXIT_SUCCESS);  // Exit the program with success status
    printf("After exit\n");  // This line will not be executed
}
