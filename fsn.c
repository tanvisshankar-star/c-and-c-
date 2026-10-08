#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    
    printf("Enter b: ");
    scanf("%d", &b);

    if (a < b) {
        printf("a is smaller", a);
    } else {
        printf("b is smaller", b);
    }

    return 0;
}