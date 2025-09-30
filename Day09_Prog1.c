#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    scanf("%49s", name);
    printf("%s\n", name);
    printf("%lu\n", strlen(name));
    return 0;
}

//Made by Shorya Bhardwaj
