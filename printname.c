#include <stdio.h>

int main() {
    char name[50]; // Creates space to store the name
    
    printf("Enter your name: ");
    scanf("%s", name); // Takes input from user
    
    printf("Hello, %s!\n", name); // Prints the name
    
    return 0;
}