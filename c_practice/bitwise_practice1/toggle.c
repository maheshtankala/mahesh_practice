#include <stdio.h>

int main() {
    int number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the bit position to toggle (starting from 0): ");
    scanf("%d", &i);

    number = number ^ (1 << i);  

    printf("Result after toggling the %dth bit: %d\n", i, number);

    return 0;
}

