#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Before abort\n");
    abort();  // Abort the program abruptly
    printf("After abort\n");  // This line will not be executed
}
