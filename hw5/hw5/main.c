#include <stdio.h>
int main() {
    int  l ;
    int b ;
    printf("length:");
    scanf_s("%d",&l);
    printf("breadth:");
    scanf_s("%d", &b);
    for (int i = 1; i <= l; i++) {
        for (int j = 1; j <= b; j++) {
            if (i == 1 || i == l) {
                printf("+");
            }
            else if (j == 1 || j == b) {
                printf("+");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}