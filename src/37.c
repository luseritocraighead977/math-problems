#include <stdio.h>

void main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("%d is greater than %d.\n", num1, num2);
    } else {
        printf("%d is less than or equal to %d.\n", num1, num2);
    }
}
