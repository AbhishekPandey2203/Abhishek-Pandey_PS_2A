#include<stdio.h>
#include<math.h>
void main()
{
    float hra,da,pf;
    int basic,Tsalary,allow
    ;


    char grade;
    printf("Basic salary");
    scanf("%d\n",&basic);

    scanf("%c",&grade);



    hra=0.20*basic;
    da=0.50*basic;
    pf=0.11*basic;



 if(grade=='a')
   {


    allow=1700;
   }
   else if(grade=='b')
   {

    allow=1500;
   }
    else
    { allow=1300;
    }
     printf("%f\n",hra);
 printf("%f\n",da);
 printf("%f\n",pf);
 printf("%d\n",allow);

    Tsalary =basic+hra+da+allow-pf ;
    printf("%d",Tsalary);





}
