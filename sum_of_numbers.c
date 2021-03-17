//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>

int limit();
int* read();
int calc();
void display();


int main()
{
    int n,sum=0;
    n=limit();
    int arr[n];
    int* ptr=read(n,arr);
    sum=calc(n,ptr);
    display(sum);  
}


int limit()
{
    int n;
    printf("Enter the number  : ");
    scanf("%d",&n);
    return n;
}

int* read(int n,int arr[])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element : ",i);
        scanf("%d",&arr[i]);
       
    }
    return arr;
}

int calc(int n,int *ptr)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum = sum + *(ptr+i);
    }
    return sum;
}

void display(int sum)
{
    printf("sum of the given numbers is : %d",sum);
}
