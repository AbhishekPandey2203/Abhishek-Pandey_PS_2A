#include<stdio.h>
#include<math.h>
void main()
{
int a[3][3],b[3][3],c[3][3];
printf("enter the value of A\n");
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the value of b\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}}
printf(" the value of  A and B addition is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]-b[i][j];
}}
printf("the addition of A and B is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}
}
