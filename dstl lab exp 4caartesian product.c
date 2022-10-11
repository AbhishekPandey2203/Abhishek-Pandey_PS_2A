#include<stdio.h>
void main()
{   printf("2021b0131189/abhishek pandey");
int m;
printf("Enter the value of m\n");
scanf("%d",&m);
int a1[m];
int n;

printf("Enter the value of n\n");
scanf("%d",&n);
int a2[n];
printf("Enter the elements in A\n");
int i,j;
for(i=0;i<m;i++)
{
scanf("%d",&a1[i]);
}
printf("Enter the elements in B\n");
for(i=0;i<n;i++)
{
scanf("%d",&a2[i]);
}
printf("The cartesian product of A and B is\n");
printf("{");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("(%d,%d)",a1[i],a2[j]);
}
}
printf("}");
}


