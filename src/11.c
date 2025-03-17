#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x = 5; // The value we want to check if it is divisible by 3
    int y = 12; // The number we will divide x by to see if it is divisible
    
    if (x % y == 0) {
        printf("Yes, %d is divisible by %d\n", x, y);
    } else {
        printf("No, %d is not divisible by %d\n", x, y);
    }
    
    return 0;
}
