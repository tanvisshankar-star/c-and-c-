#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(!(num>=1&&num<=100))
    {
        printf("Not valid");
    }
    else{
        printf("valid");
    }
    return 0;
}