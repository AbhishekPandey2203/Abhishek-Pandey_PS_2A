#include<stdio.h>
#include<math.h>
void main()
{
int a[3][3],b[3][3],c[3][3];
printf("enter the value of A\n");
int i,j,k;
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
}
}
printf("matrix multiplication\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
    c[i][j]=0;
for(k=0;k<3;k++)
{
c[i][j]= c[i][j]+a[i][k]*b[k][j];
}
printf("%d ",c[i][j]);
 }
 printf("\n");
 }
}
