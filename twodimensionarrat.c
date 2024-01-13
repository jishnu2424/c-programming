#include <stdio.h>
int main()
{
    int i=0,j=0;
   int array[3][3]={
    {1,2,3},{6,5,4},{6,7,8}};
    for(i=0;i<=3;i++){
        for(j=0;j<3;j++){
        printf("array[%d],[%d]=%d\n",i,j,array[i][j]);

    }
    }
   return 0;
}