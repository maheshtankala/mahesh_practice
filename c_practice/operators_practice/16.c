
#include <stdio.h>
#include <math.h> 

int main() {
    float side,area;
    printf("Enter the side length of the equilateral triangle: ");
    scanf("%f", &side);
    area = (sqrt(3) / 4) * side * side;
    printf("The area of the equilateral triangle is: %.2f\n", area);

    return 0;
}

