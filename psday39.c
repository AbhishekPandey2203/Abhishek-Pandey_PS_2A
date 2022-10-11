#include<stdio.h>
void patterN(int);
void main()
{
int n;
printf("Enter the value of n\n");
scanf("%d",&n);
patternN(n);

}
void patternN(int n)
{
for( int i=1;i<=n;i++)
{
for( int j=1;j<=i;j++)
{
printf("*");
}
printf(" ");
}}
