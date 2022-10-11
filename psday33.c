#include<stdio.h>
#include<math.h>
void main()
{
int n;
int x;
printf("Enter the value of n\n");
scanf("%d",&n);
printf("Enter the value of x\n");
scanf("%d",&x);
int sum=1;
int fact=1;
int i;
for(i=1;i<n;i++)
{
fact=fact*i;
x= pow(x,i);
sum=sum+x/fact;
}
printf(" The sum is %d",sum);
}
