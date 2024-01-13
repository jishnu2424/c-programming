#include<stdio.h>
int insertion(int array[],int n,int key,int capacity){
    if (n>=capacity)
    return n;
    int i ;
    for (i=n-1;(i>=0 && array[i]>key);i--)
    array[i+1]=array[i];
    array[i+1]=key;
    return n+1;
}
int main(){
    int array[20]={1,2,3,4,5,6,};
    int capacity=sizeof(array)/sizeof(array[0]);
    int n=6;
    int i, key=7;
    printf("before insertion :");
    for(i=0;i<n;i++)
    printf("%d",array[i]);
    n= insertion(array,n,key,capacity);
     printf("\nafter insertion :");
    for(i=0;i<n;i++)
    printf("%d",array[i]);
    return 0;
}