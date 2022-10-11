#include<stdio.h>
void main()
{
int students[50],n,i;
int avgmarks, marks=0;
printf("enter no of student");                 /*2021b0131189
                                                    Abhishek pandey*/

scanf("%d",&n);
printf("marks of students in class\n");
for(i=0;i<n;i++)
{
scanf("%d",&students[i]);
}
printf(" marks of total students \n");
for(i=0;i<n;i++)
{
marks=marks+students[i];

}
printf(" marks of total students is %d\n",marks);
avgmarks = marks/n;
printf(" avg marks of students is %d",avgmarks);
}
