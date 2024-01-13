#include<stdio.h>
 #include <string.h>
void main(){
 char ch[20]={'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};
 char ch1[20];
 strcpy(ch1,ch);
 printf("string is: %s",ch1);

 }