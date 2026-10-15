#include<stdio.h>
int main()
{
    int num1;
    int num2;
    float add;
    float sub;
    float mul;
    float div;
    printf("Enter the value of num1:");
    scanf("%d",&num1);
    printf("Enter the value of num2:");
    scanf("%d",&num2);
    add=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/num2;
    printf("The addition of both numbers:%.2f\n",add);
    printf("The subtraction of both numbers:%.2f",sub);
    printf("The multiplication of two numbers:%.2f\n",mul);
    if(num2==0)
    {
        printf("Error! divition by zero not allowed");

    }
    else{
        printf("The devision of both the numbers are:%.2f",div);
    }
    return 0;
}