#include<stdio.h>
#include<math.h>
void main()
{
int n;
printf("Enter the value of n\n");
scanf("%d",&n);
int x;
printf("Enter the value of x\n");
scanf("%d",&x);
float sum=0;
int fact;
sum = sum+1;
for(int i=1;i<=n;i++)
{
fact=1;
for(int j=1;j<=i;j++)
{
fact=fact*j;
}
if(i%2==0)
{
sum=sum+pow(x,i)/fact;
}
else
sum=sum-pow(x,i)/fact;
}
printf("the result of series is %f",sum);
 }
