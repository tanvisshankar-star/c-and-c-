#include <stdio.h>

int main() {
    float temperature; 

    printf("Enter temperature: ");
    scanf("%f", &temperature);
    if (temperature > 30) {
        printf("Temperature is above 30");
    } else {
        printf("Temperature is not above 30");
    }

    return 0;
}