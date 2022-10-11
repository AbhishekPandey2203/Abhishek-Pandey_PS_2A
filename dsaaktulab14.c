#include<stdio.h>
void main()
{
int n;
int arr[10];

int i;
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
int first=0;
int last =n-1;
int mid= first+last/2;
while(first<=last)
{
if(arr[mid]<num)
first=mid+1;
else if(arr[mid]==num)
{
printf("Element is found");
break;
}
else
last=mid-1;
mid=first+last/2;
}
if(first>last  )
printf("The element is not present in array\n");
}
