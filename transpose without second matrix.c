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
printf("the value of A transpose is\n");
for(j=0;j<3;j++)
{
for(i=0;i<3;i++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}

}
