#include <stdio.h>

int main() {
    int i;
    float f;
    double d;
    char c;
    char str[100];

    printf("Enter integer, float, double, character, and string :\n");
    scanf("%d %f %lf %c %s", &i, &f, &d, &c, str);
    printf("Integer: %d\n", i);
    printf("Float: %.2f\n", f);
    printf("Double: %.4lf\n", d);
    printf("Character: %c\n", c);
    printf("String: %s\n", str);

    return 0;
}

