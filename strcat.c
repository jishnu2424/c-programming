#include<stdio.h>
 #include <string.h>
void main(){
 char ch[20]={'h', 'e', 'l', 'l', 'o',' ' ,'\0'};
 char ch1[10]="manu";
//  char ch1[10]={'m','a','n','u','\0'};
 strcat(ch,ch1);
 printf("%s",ch);

 }