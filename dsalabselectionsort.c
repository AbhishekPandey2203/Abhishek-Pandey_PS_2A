#include<stdio.h>
void main()
{
int n;
printf("Enter the value of n\n");        /*2021b0131189
                                          Abhishek Pandey*/
scanf("%d",&n);
int a[n];
int i;
int temp;
printf("Enter the value at random order\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The sorting of array through selection sort is\n");
int min;
for(i=0;i<n;i++)
{
min=i;
for( int j=i+1;j<n;j++)
{
if(a[j]<a[min])
min=j;
}
temp=a[min];
a[min]=a[i];
a[i]=temp;
}
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
