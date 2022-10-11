#include<stdio.h>
 int rev( int,int);
 void main()
 {
 int n;
 printf("Enter the value of n\n");
 scanf("%d",&n);
 int z;
 z=rev(n,0);
 if(n==z)
 printf("palindrome");
 else
 printf("not palindrome");
 }
 int rev( int n,int z)
 {
 if(n==0)
 return z;
 z=(z*10)+(n%10);
 return rev(n/10,z);
 }
