#include<stdio.h>
 #include <string.h>
void main(){
 char ch[20];
 printf("enter the string : ");
 gets(ch);
 printf("string is :%s",ch);
 printf("\n Uppercase string is :%s",strupr(ch));
 

 }