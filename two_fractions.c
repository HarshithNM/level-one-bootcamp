//WAP to find the sum of two fractions.
#include <stdio.h>
#include <math.h>
struct fraction
{
    int gcd,lcm,L,N,D;
};

int input()
{
    int n;
    scanf("%d",&n);  
    return n;
}

int solve(int n1,int n2,int d1,int d2)
{
    struct fraction f;
    int ans1,ans2,x;
    for(int i=1;i<=d1 && i<=d2;i++)
    {
      f.gcd=i;
    }
  
    f.lcm = d1*d2/f.gcd;
  
    if(d1>d2 && d1%d2==0)
    {
        f.L=f.lcm/d2;
        f.N=n2*f.L+n1;
        f.D=d1;
    }
    else if(d2>d1 && d2%d1==0)
    {
        f.L=f.lcm/d1;
        f.N=n1*f.L+n2;
        f.D=d2;
    }
    else
    {
        f.N=n1*d2+n2*d1;
        f.D=d2*d1;
    } 
    
    int big=f.N;
    
    if(f.D>f.N)
        big=f.D;
    
    for(int i=1;i<=big;i++)
    {
        if((f.N%i==0)&&(f.D%i==0))
            x=i;
    }
    ans1=f.N/x;
    ans2=f.D/x;
    printf("Sum is: %d/%d",ans1,ans2);
}

int main()
{
    struct fraction f;
    
    int n1,n2,d1,d2;
    printf("Input the numberator 1: ");
    n1=input();
    printf("Input the denominator 1: ");
    d1=input();
    printf("Input the numerator 2: ");
    n2=input();
    printf("Input the denominator 2: ");
    d2=input();
    solve(n1,n2,d1,d2);
    return 0;
}
