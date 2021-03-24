#include<stdio.h>
struct fract
{
 	int num;
int den;
int mn;
int md;
};
typedef struct fract fr;
fr  input()
{
fr a;
printf("Enter the numerator\n");
scanf("%d",&a.num);
printf("Enter the denominator\n");
scanf("%d",&a.den);
return a;
}
void  n_input(int n, fr F[n])
{
	 for(int i=0;i<n;i++)
	 {
		F[i]=input();
	}
}
fr sum(int n,fr F[n])
{
	fr f;
 	int N=0, lcm = 1,r[100],x;
	for(int i=0;i<n;i++)
	{
		lcm= lcm*F[i].den;
	}
	for(int i=0;i<n;i++)
	{
		r[i]=lcm/F[i].den;
		N=N+r[i]*F[i].num;
	}
	for(int i=1;i<N&&i<lcm;i++)
	{
 		if(N%i==0&&lcm%i==0)
		{
			x=i;
		}
	}
	f.mn=N/x;
	f.md=lcm/x;
 	return f;
}
void output(fr f)
{
	printf("the sum is %d/%d",f.mn,f.md);
}
int main()
{
	int n;
	printf("Enter the number of fractions\n:");
    scanf("%d",&n);
	fr f[n],res;
	n_input(n,f);
    res=sum(n,f);

	output(res);
return 0;
}
