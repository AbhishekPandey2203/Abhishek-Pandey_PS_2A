#include<stdio.h>
void main()
{
int mm,n;
int x;
printf("Enter the value of n\n");
scanf("%d",&n);
printf("Enter the value of x\n");
scanf("%d",&x);
int m=-1;
int ctr,sum=1;
int nn,fact=1;
printf("The value of series is given by\n");
for( int i=1;i<n;i++)
{
ctr=(2*i);
mm=pow(x,ctr);
fact=fact*(ctr)*(ctr-1);
nn=m*mm;
sum=sum+nn/fact;
m=m*(-1);
}
printf("The value of sum is %d",sum);
}
