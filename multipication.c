#include<stdio.h>
int main()
{
    int a,i;
    printf("enter the number");
    scanf("%d",&a);
    for(int i=0;i<=10;i++){
        printf("%d X %d =%d\n",a,i,a*i);
    }  
    return 0;
}