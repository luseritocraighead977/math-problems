#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        if ((i + 1) % 2 == 0)
            printf("Even\n");
        else
            printf("Odd\n");
    }
    return 0;
}
