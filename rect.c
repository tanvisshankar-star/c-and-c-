#include <stdio.h>
int main()
{
    float length;
    float breadth;
    float area;
    printf("Enter the length value: ");
    scanf("%f",&length);
    printf("Enter the breadth value: ");
    scanf("%f",&breadth);
    area=length*breadth;
    printf("Area of the rectangle of length %2f and breadth %2f is:%2f\n",length,breadth,area);
    return 0;


}