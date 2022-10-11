#include<stdio.h>
void main()
{
int arr1[3][3],arr2[3][3];
int arr3[3][3];
int i,j,k;
printf("enter element of arr 1\n");     /*2021b0131189
                                          abhishek pandey*/
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&arr1[i][j]);
}
}
printf("enter the second elements");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{


scanf("%d",&arr2[i][j]);
}
}
printf("addition of 2D array\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
arr3[i][j]=arr1[i][j]+arr2[i][j];
printf("%d ",arr3[i][j]);

}
printf("\n");
}

printf("multiplication of 2D array:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
arr3[i][j]=0;

for(k=0;k<3;k++)
{
arr3[i][j]=arr1[i][j]*arr2[k][j];

}
printf("%d ",arr3[i][j]);
}
printf("\n");
}
}

