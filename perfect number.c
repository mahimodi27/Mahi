#include<stdio.h>
int main()
{
int i,sum=0,n;

printf("Enter a no");
scanf("%d",&n);

for(i=0;i<=n/2;i++)
{
if(n%i==0)
{sum=sum+i;
}}

if(n>0 && sum==n)
printf("perfect number");
else
printf("not a perfect number");

return 0;
}
