#include<stdio.h>
void main()
{
int p;
printf("Enter the value of n\n");
scanf("%d",&p);
printf("Enter the number in sequential order\n");
int arr[p];
int sum1=0;
int i;
int m;
 int n;
for(i=0;i<p;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<p;i++)
{
sum1=sum1+arr[i];

}
printf("the sum of entered is %d\n",sum1);
printf("the missing number is given by\n");
int sum2=0;
for(i=1;i<=p+1;i++)
{
    sum2=sum2+i;
}

 int sum3=sum2-sum1;
printf("the missing no is %d",sum3);

}
