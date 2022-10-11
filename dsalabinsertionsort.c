#include<stdio.h>
void main()
{
int n;
printf("Enter the no of element\n");
scanf("%d",&n);                           /*2021b0131189
                                               Abhishek Pandey*/
int a[n];
int i,j,key;
int temp;
printf("Enter the elements in array\n");
for( int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
  key=a[i];
  j=i-1;
while(j>=0&&a[j]>key)
{
a[j+1]=a[j];
j=j-1;

}

a[j+1]=key;
}
printf("Enter the array at  insertion sorted array\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}

}
