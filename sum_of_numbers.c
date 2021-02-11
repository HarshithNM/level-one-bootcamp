//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>
int main()
{
   int n, sum = 0, c,add_num;
   printf("How many number(s)? ");
   scanf("%d", &n);
   printf("Enter %d numbers:",n);
    for (c = 1; c <= n; c++)
  {
    scanf("%d", &add_num);
    sum = sum + add_num;
  }
    printf("Sum = %d\n", sum);
    return 0;
}
