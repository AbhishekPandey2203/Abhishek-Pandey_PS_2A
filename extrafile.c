#include<stdio.h>
void main()
{
int n;
printf("Enter the value of N\n");
scanf("%d",&n);
int i,sum=0;
int fact=1;
for(i=0;i<=n;i++)
{
fact=fact*i;
sum=sum+fact;
}
print("%d",sum);

}
