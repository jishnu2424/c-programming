#include <stdio.h>
int main()
{
    int n,i,j,prime;
    printf("enter the limit :");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
    prime=0;
    for (j=1;j<n;j++){
        if(i%j==0)
            prime++;
            
        }
        if(prime==2)
        printf("%d\n",i);
    }
    return 0;
}