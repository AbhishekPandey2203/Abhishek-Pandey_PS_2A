#include<stdio.h>
void series(int);
void main()
{
int n;

printf("Enter the value of N\n");
scanf("%d",&n);
series(n);
}
void series(int n)
{

int fact=1;
int sum=0;
int i;
for(i=1;i<=n;i++)
{
fact=fact*i;
sum=sum+fact/i;
}
printf("%d",sum);

}






