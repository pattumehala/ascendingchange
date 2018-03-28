#include<stdio.h>
int main()
{
int n,a[10],flag,i;
printf("\nEnter the range:");
scanf("%d",&n);
printf("\nEnter the numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<a[i+1])
{
flag=0;
}
else
{
printf("%d",i+1);
}
}
return 0;
}
