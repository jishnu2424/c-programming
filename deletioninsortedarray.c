#include <stdio.h>
int binarysearch(int arr[],int low,int high,int key);
int deletionelement(int arr[],int n,int key)
{
    int pos = binarysearch(arr,0,n-1,key);
    if (pos ==-1){
        printf("element is not found");
        return n;
    }
    int i;
    for(i=pos;i<n-1;i++)
    arr[i]=arr[i+1];
    return n-1;
}

int binarysearch(int arr[],int low,int high,int key)
{
if (high<low)
return -1;
int mid=(low+high)/2;
if (key == arr[mid])
return mid;
if (key > arr[mid])
return binarysearch(arr,(mid+1),high,key);
return binarysearch(arr,low,(mid-1),key);
}
int main(){
    int i;
    int arr[]={10,20,30,40,50};
    int n =sizeof(arr)/ sizeof(arr[0]);
    int key=30;
    printf("\narray befor edeletion \n");
    for ( i = 0; i < n; i++)
    printf("%d\t",arr[i]);

    n=deletionelement(arr,n,key);

    printf("\narray after edeletion \n");
    for ( i = 0; i < n; i++)
    printf("%d\t",arr[i]);    
    {
        return 0;
    }
    

}