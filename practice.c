#include <stdio.h>
int main()
{
    int age;
    char name[20];
    printf("Enter your age: \n");
    scanf("%d",&age);
    printf("Enter your name: \n");
    scanf("%s",&name);
    printf("age=%d\n",age);
    printf("name=%s\n",name);
    return 0;
}