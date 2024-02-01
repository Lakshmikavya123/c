#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if (a>b && a>c)
printf("a greater than b and c");
else if(b>c && b>a)
printf("b greater than c and a");
else
printf("c greater than a and b");
return 0;
}
