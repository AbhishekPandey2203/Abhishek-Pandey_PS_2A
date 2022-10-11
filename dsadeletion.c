#include<stdio.h>
void main()
{
int m;
printf("Enter the value of m\n");
scanf("%d",&m);
int arr[m];
int i,pos;
printf("Enter the element in array\n");
for(i=0;i<m;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the position u wanted to be delete\n");
scanf("%d",&pos);
for(i=pos-1;i<m;i++)
{
arr[i]=arr[i+1];
}
printf("The new array will be\n");
for(i=0;i<m-1;i++)
{
printf("%d\n",arr[i]);

}
}
