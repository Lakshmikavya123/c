#include<stdio.h>
int main()
{
int num,sum=0;
scanf("%d",&num);
for(int itr=1;itr<=num;itr++){
sum+=itr;
}
printf("%d",sum);
return 0;
}
