#include<stdio.h>
int main()
{
    int num1;
    int num2;
    printf("Enter the  num1:");
    scanf("%d",&num1);
    printf("Enter the num2:");
    scanf("%d",&num2);
    if(num1>num2)
    {
      printf("num1 is graeter than num1");
    }
    else if(num2>num1)
    {
        printf("num2 is greater than num1");
    }
    else{
        printf("Both the numbers are eqaual");
    }
    return 0;
}