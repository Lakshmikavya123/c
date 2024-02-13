#include<stdio.h>
#include<string.h>
int main()
{
char ch[50];
scanf("%s",ch);
int len=strlen(ch);
for(int i=0;i<len;i++)
{
    if(i==0 || i==len-1)
    {
        printf("%c",ch[i]);
    } 
    else
    {
        printf("*");
    }
}
}
