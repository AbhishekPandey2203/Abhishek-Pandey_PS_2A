#include<stdio.h>
void main()
{
int m,n;
printf("ENTER THE NO OF ELEMENT IN SET A\nEnter the  no of element in set B\n");
scanf("%d\n%d",&m,&n);
int a[m],b[n];
int i,j;
int k=m+n;
printf("ENTER ELEMENT IN SET A\n");
for(i=0;i<m;i++)
{                                    /*2021b0131189
                                       abhishek pandey*/
scanf("%d",&a[i]);
}
int c[k];
printf("ENTER ELEMENT IN SET B\n");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
c[i]=b[i];

}
for(int i=0;i<m;i++)
{
int count=0;
for(int j=0;j<n;j++)
{
if(a[i]!=b[j])
{
count++;
}}
if(count==n)
{
c[n]=a[i];
n++;
}
}
printf("Result of A union B is\n");
for( int i=0;i<k-1;i++)
{
printf("%d ",c[i]);
}
printf("\n");
}
