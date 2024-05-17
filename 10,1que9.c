#include <stdio.h>
#include <string.h>

void Reverse() {
    char str[] = "Hello";
    int length = strlen(str);
    printf("Reversed string: ");
    for(int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    Reverse();
    return 0;
}




