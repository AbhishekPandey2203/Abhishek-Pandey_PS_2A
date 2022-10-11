#include<stdio.h>
void main()
{
int n=4;
int p=n;

for( int i=1;i<=p;i++)
{
    int a=i;

for(int j=n-1;j>=1;j--)
{
printf(" ");
}
for(int k=1;k<=i;k++)
{
printf("%d ",a);
a++;
}
n--;
printf("\n");

}
}
