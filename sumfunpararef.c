#include <stdio.h>
// void sum(int,int);
int main()
{
    int a,b;
printf("enter the two numbers");
scanf("%d%d",&a,&b);
 sum(&a,&b);
}
void sum(int *a,int *b)
{
 printf("%d",*a+*b); 
}