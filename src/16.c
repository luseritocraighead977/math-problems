#include <stdio.h>
#include <stdlib.h>

void main() {
    int i;

    for (i = 0; i < 10; ++i) {
        printf("Hello, World!\n");
        if (i == 3)
            break;
    }
}

