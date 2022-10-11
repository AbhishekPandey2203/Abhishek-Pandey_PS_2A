#include<stdio.h>
void main()
{
int n;
float median;
printf("enter the value of n\n");
scanf("%d",&n);
int arr[n];
int i;
for(i=0;i<n;i++)
{
   scanf("%d",&arr[i]);

}
int sum=0;
for(i=0;i<n;i++)
{
sum=sum+arr[i];
}
sum=sum/n;
printf("%d",sum);
printf("enter for meadian\n");
if(n%2==0)
{
   int median=arr[n/2];
}
else
{
  int   k=n/2;
    median=(arr[k]+arr[k+1])/2;
}
printf("the  value is %f", median);
}

