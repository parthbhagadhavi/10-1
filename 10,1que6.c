



#include <stdio.h>

void Matrix() {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    Matrix();
    return 0;
}

