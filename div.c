#include<stdio.h>
int main()
{
    float num1;
    float num2;
    float division;
    printf("Enter the first number:");
    scanf("%f",&num1);
    printf("Enter the second number:");
    scanf("%f",&num2);
    if(num2==0)
    {
        printf("Error! Division by zero is not allowed");
    }
    else
    {
    division=num1/num2;
    printf("The division of %2f and %2f:%2f\n",num1,num2,division);
    }
    return 0;

}