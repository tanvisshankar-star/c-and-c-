#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (a != b)
        printf("Numbers are not equal");
    else
        printf("Numbers are equal");

    return 0;
}