#include<stdio.h>
int fun(int start,int end)
{
printf("%d ",start);
start++;
if(start!=end+1)
fun(start,end);
return 0;
}
int main()
{
fun(1,10);
return 0;
}
