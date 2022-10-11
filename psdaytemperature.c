#include<stdio.h>

void main()
{
    int temperature;
scanf("%d",&temperature);
if(temperature<0)
printf("freezing weather");
else if(temperature>=0&&temperature<10)
printf("Very cold weather");
else if(temperature>=10&&temperature<20)
printf("cold weather");
else if(temperature>=20&&temperature<=30)
printf("normal in temp");
else if(temperature>30&&temperature<=40)
printf("its hot");
else
 printf("its very hot");
}
