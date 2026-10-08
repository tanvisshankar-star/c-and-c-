#include <stdio.h>

int main() {
    int correctnumber = 100;
    int usernumber;

    printf("Enter a number: ");
    scanf("%d", &usernumber);
    if (usernumber == correctnumber) {
        printf("Correct\n");
    } else {
        printf("Incorrect\n");
    }

    return 0;
}