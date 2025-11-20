#include<stdio.h>
int main()
{
int i,n;
int sum=0;
printf("Enter a number n:");
// for even no= 2*i
scanf("%d",&n);

for(i=1;i<=n;i++)
{sum=sum+ 2*i-1;}

printf("The sum of first %d odd numbers is:", n);
printf("sum=",sum);

return 0;
}
