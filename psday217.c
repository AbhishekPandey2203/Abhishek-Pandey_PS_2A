#include<stdio.h>
void main()
{
int n;
scanf("%d",&n);
int a=1;
int m;
int i,j;
printf("Enter the pattern");
for(i=1;i<=n;i++)
{
m=a;
for(j=1;j<=i;j++)
{
printf("%d",m);
j<i?m++:m--;
}
printf("\t");
}

}
