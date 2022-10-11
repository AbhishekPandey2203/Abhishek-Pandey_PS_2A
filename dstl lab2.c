#include<stdio.h>
void main()
{ int m,n;
printf("Enter the value of m for arr1\n");
scanf("%d",&m);
printf("Enter the value of n for arr2\n");
scanf("%d",&n);
int arr1[m],arr2[n];
int i,j;
printf("Enter the value of arr1\n");
for(i=0;i<m;i++)
{
scanf("%d",&arr1[i]);
}
printf("Enter the value of arr2\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr2[i]);
}
printf("The intersection of arr1 and arr2 is\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(arr1[i]==arr2[j])
printf("%d\n",arr1[i]);
}
}
}
