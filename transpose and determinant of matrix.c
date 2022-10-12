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
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
b[j][i]=a[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",b[i][j]);
}
printf("\n");
}

 int det;
det = a[0][0] * ( (a[1][1] * a[2][2]) - (a[2][1] * a[1][2]) )- a[0][1] * ((a[1][0] * a[2][2]) - (a[2][0] * a[1][2])) + a[0][2] * ((a[1][0] * a[2][1]) - (a[2][0] * a[1][1])) ;
    printf("Determinant: %d",det);
}

