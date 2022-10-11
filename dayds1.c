#include<stdio.h>
void main()
{
int m;
printf("enter m value");
scanf("%d",&m);
int a[m];
int i;
printf("Enter elements for a");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("reversing of element are in the array");
for(i=m-1;i>=0;i--)
{
printf("%d\n",a[i]);
}
}
