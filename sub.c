#include<stdio.h>
int main()
{
    float num1;
    float num2;
    float sub;
    printf("Enter the first number:");
    scanf("%f",&num1);
    printf("Enter the second number:");
    scanf("%f",&num2);
    sub=num1-num2;
    printf("The sub of %2f and %2f:%2f\n",num1,num2,sub);
    return 0;

}