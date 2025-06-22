#include <stdio.h>

int main() {
    float side;
    
    printf("Enter side of square: ");
    scanf("%f", &side);
    
    float area = side * side;
    printf("Area of square = %.2f\n", area);
    
    return 0;
}