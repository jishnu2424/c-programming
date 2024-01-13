#include <stdio.h>
int main()
{
  int a,sum=0;
printf("enter the number:");
scanf("%d",&a);
int r=a;
while (a!=0)
{
 int reminder=a%10;
a=a/10;
sum+=reminder;
}

printf("sum of number :%d",sum);
    return 0;
}