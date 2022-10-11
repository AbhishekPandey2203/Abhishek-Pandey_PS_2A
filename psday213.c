#include<stdio.h>
void seri(int);
int main()
{

int n=16;
seri(n);
return 0;

}
void seri(int n){
printf("%d ",n);
if(n<=0)
    return;
seri(n-5);
printf("%d ",n);
}



