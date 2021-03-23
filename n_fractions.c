//WAP to find the sum of n fractions.
#include<stdio.h>
struct fract
{
int num;
int den;
};
typedef struct fract fr;
fr input()
{
fr a;
printf("Enter the numerator\n");
scanf("%d",&a.num);
printf("Enter the denominator\n");
scanf("%d",&a.den);
return a;
}
fr sum(fr a,fr b)
{
fr res;
if(a.den==b.den)
{
res.den=a.den;
res.num=a.num+b.num;
}
else
{
res.den=a.den*b.den;
res.num=(a.num*b.den)+(b.num*a.den);
}
return res;
}
int main()
{
int n;
printf("Enter the number of fractions\n");
scanf("%d",&n);
fr c,a[n];
c.num=0;
c.den=1;
for(int i=0;i<n;i++)
{
printf("For fraction %d ",(i+1));
a[i]=input();
}
for(int i=0;i<n;i++)
{
c=sum(c,a[i]);
}
printf("The final sum is %d/%d which is %.2f ",c.num,c.den,(c.num/(1.0*c.den))*100);
return 0;
}
