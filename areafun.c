#include<stdio.h>
int area();
int main(){
    printf("%d",area());
    return 0;
}

int area(){
    int a,area;
    printf("enter two number:");
    scanf("%d",&a);
    area=a*a;
    return area;
}