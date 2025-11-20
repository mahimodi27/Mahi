#include<stdio.h>
int main()
{
int sum=0;
int h=100;//upper limit=100//
int i;
printf("calculating the sum of integers from 1 to %d divisible by 3 and 13",h);
for(int i=1;i<=h;i++);
{
for(i%3==0 && i%13==0);
{
sum = sum+i
printf("the final result is=%d",sum);
}}
return 0;
}
