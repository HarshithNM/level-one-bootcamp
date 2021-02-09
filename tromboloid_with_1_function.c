//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>

int main()
{
    float h,d,b,v;
    printf("\n Enter the value of h:");
    scanf("%f",&h);
    printf("\n Enter the value of d:");
    scanf("%f",&d);
    printf("\n Enter the value of b:");
    scanf("%f",&b);
    v = (1.0/3.0) * ((h*d*b)+(d/b));
    printf("\n Volume of Tromboloid is: %f \n",v);
    return 0;
}
