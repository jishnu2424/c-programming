#include <stdio.h>
int main()
{
  int num,rev=0;
printf("enter the number:");
scanf("%d",&num);
int b=num;
while (num!=0)

{
 int reminder=num%10;
 num=num/10;
 rev=rev*10+reminder;
}
if (b==rev)
{
printf("number is palindrom");
}
else
{
printf("number is not palindrom");
}
    return 0;
}