#include<stdio.h>
int insertion(int array[],int n,int key,int capacity){
    if (n>=capacity)
    return n;
    array[n]=key;
    return n+1;
}
int main(){
    int array[20]={1,2,3,6,5,4,};
    int capacity=sizeof(array)/sizeof(array[0]);
    int n=6;
    int i, key=9;
    printf("before insertion :");
    for(i=0;i<n;i++)
    printf("%d",array[i]);
    n= insertion(array,n,key,capacity);
     printf("\nafter insertion :");
    for(i=0;i<n;i++)
    printf("%d",array[i]);
    return 0;
}