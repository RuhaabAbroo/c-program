#include <stdio.h>

int main() {
    int a = 0, b = 1, next;
    printf("%d\n%d\n", a, b);
    for (int i = 3; i <= 10; i++) {
        next = a + b;
        printf("%d\n", next);
        a = b;
        b = next;
    }
    return 0;
}
