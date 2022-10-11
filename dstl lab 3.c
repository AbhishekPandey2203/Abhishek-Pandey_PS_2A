#include<stdio.h>
void main()
{
int m,n;
printf("value of how many element in A\n");
scanf("%d",&m);
printf("value of how many element in B\n");
scanf("%d",&n);
int arr1[m],arr2[n],arr3[m];
int k=0;

int i,j;
printf("Enter the element of A\n");
for(i=0;i<m;i++)
{
scanf("%d",&arr1[i]);
}
printf("Enter the element of B\n");

for(i=0;i<n;i++)
{
scanf("%d",&arr2[i]);
}
printf("The difference of A and B\n");

for(i=0;i<m;i++)
{ int found=0;
for(j=0;j<n;j++)
{
if(arr1[i]==arr2[j])
found++;

}
if(found==0)
  {

    arr3[k]=arr1[i];
k++;

}

}
for(i=0;i<k;i++)
{
  printf("%d ",arr3[i]);

}
}
