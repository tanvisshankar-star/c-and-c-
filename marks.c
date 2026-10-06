#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int num3;
    float average;
    int total;
    printf("Enter the value of the first number: ");
    scanf("%d",&num1);
    printf("Enter the value of the second number: ");
    scanf("%d",&num2);
    printf("Enter the value of the third number: ");
    scanf("%d",&num3);
    total=num1+num2+num3;
    average=total/3;
    printf("The total value of all three numbers is:%d\n",total);
    printf("The average value of all three numbers is:%.2f\n",average);
    return 0;
    

}
