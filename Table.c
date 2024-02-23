#include<stdio.h>
void table_print(int num)
{
    int i;
    scanf("%d",&i);
printf("%d * %d = %d \n", num, i, num*i);
}
int main()
{
int num;
scanf("%d",&num);
table_print(num);
}  
