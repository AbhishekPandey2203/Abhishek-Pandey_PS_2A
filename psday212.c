#include<stdio.h>
void main()
{
int i,j;
int a=1;
int m;
for(i=1;i<=6;i++)
{
    m=a;
for(j=1;j<=11;j++)
{
if(j<=7-i||j>=5+i)
{
printf("%d",m);
j<6?m++:m--;
}
else{

printf(" ");
if(j==6)
m--;}
}
printf("\n");
}
}
