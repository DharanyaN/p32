#include<stdio.h>
int main()
{
int a,i,count=0,n;
printf("Enter the number");
scanf("%d",&a);
for(i=2;i<a;i++)
{
n=a%i;
if(n==0)
count ++;
}
if(count==0)
{
printf("given no is prime");
}
else
{
"given no is not prime");
}
}
