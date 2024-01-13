#include <stdio.h>
int main()
{
  int a,i=0;
printf("enter the number:");
scanf("%d",&a);
    do
    {
        printf("%d\n",i);
        i=i+2;
    } while (i<=a);
    
    
    return 0;
}