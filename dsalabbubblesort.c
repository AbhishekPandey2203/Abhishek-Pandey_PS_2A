#include<stdio.h>
void main()
{
int n;
printf("Enter the value of n\n");
scanf("%d",&n);                       /*2021b0131189
                                          Abhishek Pandey*/
int a[n];
int i;
int temp;
printf("Enter the value at random order\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The value at sorting order through bubble sort is \n");
for(i=0;i<n;i++)
{
for( int j=0;j<n;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
