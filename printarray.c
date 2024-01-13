#include <stdio.h>
void main(){
        int n;
    printf("enter the array size");
    scanf("%d",&n);
    int marks[n];
    printf("enter the array element :");
    for(int i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<n;i++){
    printf("%d\t",marks[i]);
    }
    return 0;
}