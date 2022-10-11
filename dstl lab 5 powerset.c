#include<stdio.h>
#include<math.h>
void main()
{
    printf("2021b0131189/abhishek pandey");
int m;
printf("Enter the value of m\n");
scanf("%d",&m);
int a1[m];

int i,j;
printf("Enter the elements in A\n");
for(i=0;i<m;i++)
{
scanf("%d",&a1[i]);
}
printf("The power set is given by\n");
int n=pow(2,m);
for(i=0;i<n;i++)
{
    printf("{");
for(j=0;j<n;j++)
{
if(i&(1<<j))
printf(" %d ",a1[j]);
}
printf("}");
printf("\n");
}
}
