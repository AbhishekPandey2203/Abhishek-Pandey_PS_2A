#include<stdio.h>
void main()
{
int m;
printf("Enter the no of element\n");
scanf("%d",&m);

int arr[m];
int pos,elem,i;
printf("Enter elements\n");
for(i=0;i<m;i++)
{
scanf("%d",&arr[i]);
}
m++;
printf("Enter position to be inserted element\n");
printf("Enter the element\n");
scanf("%d",&pos);
scanf("%d",&elem);
for(i=m;i>pos;i--)
{
arr[i-1]=arr[i-2];
}
arr[pos-1]=elem;
printf("The new set of array will be\n");
for(i=0;i<m;i++)
{
printf("%d\n",arr[i]);
}

}
