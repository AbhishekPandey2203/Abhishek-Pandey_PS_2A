#include<stdio.h>
void series(int);
void main()
{
int n;
printf("Enter the value of n\n");
scanf("%d",&n);
series(n);
}
void series( int n)
{
float sum=1;
int fact=1;
int a=-1,ctr;
int p,b;
for( int i=1;i<n;i++)
{ ctr=i+1;
   b=i+2;
   fact=fact*(b)*(b-1);
   p=ctr*a;
   sum=sum+ctr/fact;
   a=a*(-1);
}
printf("The value of sum is %f",sum);

}
