#include <stdio.h>
int findelement(int array[],int n,int key)
    {
        int i;
        for(i=0;i<n;i++)
        if (array[i]==key)
        return i;
        return -1;
    }
int main()
{
    int array[]={5,6,4,8,6,3};
    int n =sizeof(array)/sizeof(array[0]);
    int key=6;
    int position=findelement(array,n,key);
    if (position==-1)
    printf("element is not found");
    else 
    printf("element found at %d",position+1);
    return 0;
}