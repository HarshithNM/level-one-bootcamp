//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>
float input()
{
    float h; 
    
    scanf("%f",&h);
    return h;
}

float find_vol(float h, float b, float d)
{
    float vol;
    vol = (1.0/3.0) * ((h*b*d)+(d/b));
    return vol;
}

void output(float h, float b, float d)
{
    printf("The Volume of tromboloid is %f\n",d);
}

float main()
{
    float w,x,y,z;
    printf("Enter the height:");
    w=input();
    printf("Enter the breadth:");
    x=input();
    printf("Enter the depth:");
    y=input();
    z=find_vol(w,x,y);
    output(w,x,z);
    return 0;
}


