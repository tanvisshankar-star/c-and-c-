#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age <= 18)
        printf("Age is less than or equal to 18");
    else
        printf("Age is greater than 18");

    return 0;
}