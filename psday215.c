#include<stdio.h>
void main()
{
int N;
printf("Enter the value of N\n");
scanf("%d",&N);
switch(N)
{
case 1:
printf("1");
break;
case 2:
printf("11");
break;
case 3:
printf("21");
break;
case 4:
printf("1211");
break;
case 5:
printf("11121");
break;
default:
printf("Value not correct");
}
}
