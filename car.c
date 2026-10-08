#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18 && age <= 60) {
        printf("Age is within the valid range (18-60).");
    } else {
        printf("Age is outside the valid range.");
    }

    return 0;
}