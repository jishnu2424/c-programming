#include <stdio.h>
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
int array[]={1,2,3,6,5,4};
int n,key;
n=sizeof(array)/sizeof(array[0]);
key=10;
printf("index :%d",binarysearch(array,0,n-1,key));
return 0;
}