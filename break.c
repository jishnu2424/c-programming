#include <stdio.h>
int main()
{
  int a,i;
printf("enter the number:");
scanf("%d",&a);
 for (i=0 ; i<=a; i++)
 {
if(i==4)
{
break;
}
 printf("%d\n",i);
 }

    return 0;
}