#include <stdio.h>
int main()
{
    int a,first,second=0,next;
    printf("enter the limit :");
    scanf("%d",&a);
    
    for (first=0; first<a; first++)
    {
        printf("%d\t",first);
        next=first+second;
        first=second;
        second=next;
    }
    return 0;
    
}