#include<stdio.h>
void main()
{
int i,j;
int k=1;
int m;
for(i=1;i<=4;i++)
{
    m=k;
for(j=1;j<=7;j++)
{
if(j>=5-i&&j<=3+i)
{
printf("%d",m);
j<4? m--:m++;


}
else
printf(" ");

}
printf("\n");
k++;

}
}
