#include<stdio.h>
void main()
{
int n;
printf("Enter the value of n\n");
scanf("%d",&n);
int a=1;
int m;
for(int i=1;i<=n;i++)
{
m=a;
for( int j=1;j<=i;j++)
{
printf("%d",m);
j<=n?m++:m--;
}

for( int j=i-1;j>=1;j--)
{
printf("%d",j);

}
printf("\t");

}}
