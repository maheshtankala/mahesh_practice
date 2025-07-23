#include <stdio.h>
int main() {
    int number = 10;     // Binary: 1010
    int mask = 2;        // Binary: 0010

    if (number | mask) {
        printf("2nd bit is ON\n");
    } else {
        printf("2nd bit is OFF\n");
    }

    return 0;
}

