#include<stdio.h>
void main()
{
int n;
int arr[10];
int found=0;
int i,j;
printf("Enter how many element\n");
scanf("%d",&n);
printf("Enter the element\n");
for( int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int num;
printf("Element that u have to searched\n");
scanf("%d",&num);

for( int i=0;i<n;i++)
{
if(arr[i]==num)
{found++;
j=i+1;

}}
if(found==1)
{
printf("element is found at %d position",j);
}
else
printf("Element is not found\n");
}

