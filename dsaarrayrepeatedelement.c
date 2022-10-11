#include<stdio.h>
void main()
{
int n;
printf("Enter the value of N\n");
scanf("%d",&n);
int arr[n];
int i,j;
int m;
int count=0;
printf("Enter the element in an array\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Repeated element in array is\n");
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]==arr[j])
    printf("%d",arr[j]);

}
}}
