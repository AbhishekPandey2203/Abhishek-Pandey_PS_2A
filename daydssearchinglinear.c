#include<stdio.h>
void main()
{
int m;
int arr[10];
int i,num,found=0,j;
printf("Enter how many element\n");          /*2021b0131189
                                                Abhishek Pandey */
scanf("%d",&m);
printf("Enter element in array\n");
for(i=0;i<m;i++)
{
scanf("%d",&arr[i]);
}
printf("element that has to be searched\n");
scanf("%d",&num);
for(i=0;i<m;i++)
{
if(arr[i]==num)
{
    found=1;
    j=i+1;
}

}

if(found==1)
{
    printf("Element %d is Found at %d location",num,j);
}else
printf("Element not Found");
}
