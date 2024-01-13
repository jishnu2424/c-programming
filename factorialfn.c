#include <stdio.h>>
int factorial();
int main(){
    factorial();
    return 0;
}
int factorial()
{
    int n,fact=1,i;
    printf("enter the number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
       fact=fact*i;
    }
    printf("factorial is :%d",fact);
}