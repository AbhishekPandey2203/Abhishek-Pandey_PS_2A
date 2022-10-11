#include<stdio.h>
void main()
{
int n;
printf("Enter the value of n\n");
scanf("%d",&n);
int i,sum=0;
printf("The given series is \n");
for(i=0;i<=n;i++)
{
sum=sum+i*(i+1)*(i+2);
}
printf("%d",sum);
}
