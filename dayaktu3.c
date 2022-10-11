#include<stdio.h>
void main()
{
int m,n;
printf("enter value of m and n\n");
scanf("%d\n%d",&m,&n);
                                  /*2021b0131189
                                  abhishek pandey*/
int a[m][n],b[m][n];
int i,j;
printf("enter the value for a matrix");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}}
printf("reverse order matrix is given by A\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d\t",a[j][i]);
}
printf("\n");
}}
