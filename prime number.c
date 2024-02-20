#include<stdio.h>
int main()
{
int n=7,i;
int count=0;
for(i=2;i<=n/2;i++)
if(n%i==0){
count = count+1;
break;
}
if(count==0)
printf("The number is prime");
else
printf("The number is not prime");
return 0;
}
