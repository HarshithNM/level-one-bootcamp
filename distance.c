//WAP to find the distance between two point using 4 functions.
#include <stdio.h>
#include<math.h>
int input()
{
    float x1; 
    
    scanf("%f",&x1);
    return x1;
}

float find_dist(float x1, float y1, float x2,float y2)
{
    float d;
     d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return d;
}

void output(float x1, float x2, float y1, float y2, float d)
{
    printf("The distance between the points : %f\n",d);
}

float main()
{
    float v,w,x,y,z;
    printf("Enter the coordinates(x1,y1):");
    v=input();
    w=input();
    printf("Enter the coordinates(x2,y2):");
    x=input();
    y=input();
    z=find_dist(v,w,x,y);
    output(v,w,x,y,z);
    return 0;
}
