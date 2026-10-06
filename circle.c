#include <stdio.h>
int main()
{
    float pi=3.14;
    float radias;
    float area;
    printf("Enter the value of the radias:");
    scanf("%f",&radias);
    area=pi*radias*radias;
    printf("The area of the given circle is:%.2f\n",area);
    return 0;
}