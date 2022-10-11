#include<stdio.h>
void main()
{
int n;
printf("Enter the how many element in array\n");
scanf("%d",&n);
int arr[n];
printf("Enter the element in array\n");
for( int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("reversal of an array\n");
for(int j=n-1;j>=0;j--)
{
printf("%d ",arr[j]);
}
}
