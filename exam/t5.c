#include<stdio.h>
int main()
{
    float age;
    int member;
    printf("Enter the age:");
    scanf("%f",&age);
    printf("Enter 1 or 0 depending wheather the person is a member or not:");
    scanf("%d",&member);
    if(age>=60||member==1)
    {
        printf("costumer recieves a discount");
    }
    else{
        printf("costumer does not recieve a discount");
    }
    return 0;
    
}