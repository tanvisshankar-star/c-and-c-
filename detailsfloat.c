#include <stdio.h>
int main()
{
    int age;
    char name[20];
    int roll;
    float marks;
    printf("Enter the age: ");
    scanf("%d",&age);
    printf("Enter the name: ");
    scanf("%s",&name);
    printf("Enter the roll no: ");
    scanf("%d",&roll);
    printf("Enter marks: ");
    scanf("%f",&marks);
    printf("\n-----Student Details-----\n");
    printf("age=%d\n",age);
    printf("name=%s\n",name);
    printf("roll no=%d\n",roll);
    printf("marks=%f\n",marks);
    return 0;
}