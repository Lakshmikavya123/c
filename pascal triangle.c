#include<stdio.h>
int main()
{
int n=5,i,j,c;
for(i=1;i<=n;i++)
{
c=1;
for(j=1;j<=i;j++)
{
printf("%d",c);
c=c*(i-j)/j;
}
printf("\n");
}
return 0;
}
