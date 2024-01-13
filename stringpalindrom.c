#include <stdio.h>
#include <string.h>
void stringlen(char s[])
{
    int length=strlen(s);
    int i,j;
    char temp;
    for ( i = 0,j=length-1; i<j; i++,j--)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
}
int main()
{
    char k[]="malayalam";
    char s[20];
    strcpy(s,k);
    stringlen(s);
    if (strcmp(k,s)==0)
    {
        printf("%s is palindrom",s);
    }
    else{
        printf("%s is not palindrom",s);
    }
}