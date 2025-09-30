#include <stdio.h>

int main() {
    int n = 5, a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        int t = a + b;
        a = b;
        b = t;
    }
    printf("\n");
    return 0;
}

//Made by Shorya Bhardwaj
