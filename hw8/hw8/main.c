#include <stdio.h>

int main() {
    int l = 500;  

   
    for (int a = 1; a <= l; a++) {
        for (int b = a; b <= l; b++) {
            for (int c = b; c <= l; c++) {
                if (a * a + b * b == c * c) {  
                    printf("Found Pythagorean triple: a=%d, b=%d, c=%d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}