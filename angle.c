#include<stdio.h>
int main()
{
int angle1, angle2;
scanf("%d", &angle1);
scanf("%d", &angle2);
int thirdAngle = 180 - angle1 - angle2;
printf("%d",thirdAngle);
return 0;
}
