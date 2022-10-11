#include<stdio.h>
void main()
{
int arr[15],n,i;                   /*2021b0131189
                                    Abhishek Pandey*/
int max;
printf("enter the how many much element\n");
scanf("%d",&n);
printf("enter no of element\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("maximum element is given by\n");
max=arr[0];
for(i=1;i<n;i++)
{
if(max<arr[i])
max=arr[i];
}
printf("maximum element is given by is %d",max);
}

