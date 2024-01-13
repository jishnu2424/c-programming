#include<stdio.h>
 #include <string.h>
void main(){
 char ch[20],ch1[20];
 printf("enter the string : ");
 gets(ch);
 printf("enter the next string : ");
 gets(ch1);
 if (strcmp(ch,ch1)==0)
    printf("strinds are equal");
 else
 printf("strings are not equal");

 }