#include <stdio.h>
int main()
{
  int a,result=0;
printf("enter the number:");
scanf("%d",&a);
int b=a;
while (a!=0)
{
 int reminder=a%10;
 result+=reminder*reminder*reminder;
 a=a/10;
}
if (result==b)
{
printf("number is amstrong");
}
else
{
printf("number is not amstrong");
}


    return 0;
}