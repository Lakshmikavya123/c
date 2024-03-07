#include<stdio.h>
int addition()
{
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    int res=num1+num2;
    printf("%d",res);
    return res;
}
int main()
{
    int res=addition();
    printf("%d",res);
    return 0;
}
