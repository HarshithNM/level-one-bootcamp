//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <math.h>

struct coordinates 
{ 
   float x, y; 
}p1,p2; 


float inputx()
{
    float x;
    scanf("%f",&x);
    return x;
}

float inputy()
{
    float y;
    scanf("%f",&y);
    return y;
}


void print(float dist)
{
    printf("Distance between two points = %f\n",dist);
}


float calc(float x1, float y1,float x2,float y2)
{
     return (sqrt(( (x2-x1)*(x2-x1) )+( (y2-y1)*(y2-y1))));  
}




int main() 
{
    float x1, y1, x2, y2;
    
    printf("Enter the coordinate x1: ");
    p1.x=inputx();
    
    printf("Enter the coordinate y1: ");
    p1.y=inputy();
            
    printf("Enter the coordinate x2: ");
    p2.x=inputx();
    
    printf("Enter the coordinate y2: ");
    p2.y=inputy();
    
    float dist = cal(p1.x,p1.y,p2.x,p2.y);
    print(dist);
    return 0;
}
