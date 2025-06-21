#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 50 || num > 100)
        printf("Number is outside the range.\n");
    else
        printf("Number is within the range.\n");
    return 0;
}
