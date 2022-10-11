#include<stdio.h>
void main()
{
int n;
printf("Enter the value of n\n");
scanf("%d",&n);
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i==0||i==n-1||i+j==n-1)
printf("*");
else
printf(" ");
}printf("\n");
}
}
