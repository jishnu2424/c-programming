#include <stdio.h>
int main()
{
  int a,b,c;
  printf("enter firstno:");
  scanf("%d",&a);
  printf("enter secondno:");
  scanf("%d",&b);
  printf("enter thircno:");
  scanf("%d",&c);
  if (a>b && a>c){
  printf("gratest number is %d",a);
  }
  else if (b>a && b>c){
    printf("gratest number is %d",b);
  }
  else if (c>a && c>b){
    printf("gratest number is %d",c);
  }


    return 0;
}