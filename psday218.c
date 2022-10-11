#include<stdio.h>
void main()
{
char str[20];
printf("Enter the string\n");
gets(str);
printf("Pattern value\n");
int i,j;
for(i=0;str[i]!='\0';i++)
{
for(j=0;str[j]!='\0';j++)
{
if(j>=i)
printf("%c",str[j]);
else
printf(".");
}
printf("\n");
}
}
