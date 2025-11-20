#include<stdio.h>
int main()

{
int n,original,reversed=0,remainder;

printf("Enter n");
scanf("%d",&n);

original=n;
while(n!=0)
remainder= n%10;
reversed= reversed*10+ remainder;
n=n/10;

if(original==reversed)
printf("palindrome");
else
printf("not a palindrome");

return 0;
}
