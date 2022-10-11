#include<stdio.h>
void main()
{
int i,j;
char ch='E';
char m;
for(i=1;i<=5;i++)
{
m=ch;
for(j=1;j<=i;j++)
{
printf("%c",m);
m++;
}
printf("\n");
ch--;
}}
