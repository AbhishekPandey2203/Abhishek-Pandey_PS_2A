 #include<stdio.h>
void main()
{
int m,arr[10],i,loc=0;
int last,mid,first;
int num;                                       /*2021b0131189
                                                  abhishek pandey*/
printf("Enter how many element\n");
scanf("%d",&m);
printf("enter no of element\n");
for(i=0;i<m;i++)
{
scanf("%d",&arr[i]);
}
printf("Element that has to be searched\n");
scanf("%d",&num);
first=0;
last=m-1;
mid=(first+last)/2;
while(first<=last)
{
if (arr[mid]<num)
first=mid+1;
else if (arr[mid]==num)
{ loc=mid+1;
    printf("Element has been found at %d",loc);
break;
}
else
last=mid-1;
mid=(first+mid)/2;
}
}
