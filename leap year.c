#include<stdio.h>
void check_leap_year(int year)
{
if(((year%4==0) && (year%100!=0)) ||(year%400==0))
{
printf("%d is a leap year",year);
}
else
{
printf("%d is not a leap year",year);
}
}
int main()
{
int year;
scanf("%d",&year);
check_leap_year(year);
return 0;
}
