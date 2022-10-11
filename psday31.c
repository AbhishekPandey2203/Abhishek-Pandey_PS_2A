#include<stdio.h>
void main()
{
int n;
printf("Enter the value of N\n");
scanf("%d",&n);
int i,sum;
int fact=1;
sum=0;
for(i=1;i<=n;i++)
{
fact=(fact*i);
sum = sum+fact;
}
printf("%d",sum);

}
