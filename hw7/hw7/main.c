#include <stdio.h>
int main() {
    int a, j, k, rows = 10;
    printf("(A)\n");
    for (a = 1; a <= rows; a++) {
        for (j = 1; j <= a; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n(B)\n");
    for (a = rows; a >= 1; a--) {
        for (j = 1; j <= a; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n(C)\n");
    for (a = rows; a >= 1; a--) {
        for (k = 0; k < rows - a; k++) {
            printf(" ");
        }
        for (j = 1; j <= a; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n(D)\n");
    for (a = 1; a <= rows; a++) {
        for (k = rows - a; k > 0; k--) {
            printf(" ");
        }
        for (j = 1; j <= a; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}