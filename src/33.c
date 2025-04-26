#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("The input is invalid. Please enter a positive integer.\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            printf("%d ", i);
        else
            printf("* ");
    }
    
    printf("\n");
    
    return 0;
}
