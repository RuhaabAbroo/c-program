#include <stdio.h>

int main() {
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        for (char c = 'A'; c <= ch; c++) {
            printf("%c ", c);
        }
        printf("\n");
    }
    return 0;
}
