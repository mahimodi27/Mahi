#include<stdio.h>
int main()
{
int a,b,c;
printf("enter two numbers a and b ");
scanf("%d,%d",&a,&b);
b=100*a;
printf("The conversion of money to rupees is\n");
printf("100*%d=%d\n",a,b);
c=a+b;
printf("the sum of a and b is\n");
printf("%d+%d=%d\n",a,b,c);
c=a/b;
printf("the division of a w.r.t b is\n");
printf("%d/%d=%d\n",a,b,c);
c=a-b;
printf("the subtraction of a with b is\n");
printf("%d-%d=%d",a,b,c);


}
