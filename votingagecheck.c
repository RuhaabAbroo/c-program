#include <stdio.h>

int main() {
    int age;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if(age >= 18) {
        printf("\nYou are eligible to vote!\n");
    } else {
        printf("\nYou are not eligible to vote yet.\n");
    }
    
    return 0;
}