#include<stdio.h>
int main()
{
    float marks;
    int attendance;
    printf("Enter the marks of the student:");
    scanf("%f",&marks);
    printf("Enter the attendance of the student:");
    scanf("%d",&attendance);
    if(marks>=40&&attendance>=75)
    {
        printf("student has passed");
    }
    else{
        printf("Student has failed");
    }
    return 0;
    
}