#include <stdio.h>

int main() {
    int number;
    printf("Think of a number, add 5, multiply by 2, subtract 4, divide by 2.\n");
    printf("Enter your final number: ");
    scanf("%d", &number);
    
    printf("Your original number was %d!\n", (number * 2 + 4) / 2 - 5);
    return 0;
}