#include<stdio.h>
#include<math.h>
void main(){
int x,sum,ctr;
int i,n,m,mm,nn;
printf("Enter the value of n\n");
scanf("%d",&n);
printf("Enter the value of x\n");
scanf("%d",&x);
sum=x;
m=-1;
int fact=1;
printf("The value of series is given by:\n");
for(i=1;i<n;i++)
{

    ctr=(2*i+1);
    mm=pow(x,ctr);
    fact=fact*(ctr)*(ctr-1);
    nn=mm*m;
    sum=sum +nn/fact;
    m=m*(-1);

}
printf("The value of sum is %d",sum);
}
