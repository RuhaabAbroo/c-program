#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Divided by 2: %d\n", num >> 1);
    return 0;
}
