#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    int index,ele;
    scanf("%d%d",&index,&ele);
    ++size;
    int brr[size];
    for(int i=0;i<size;i++)
    if(i==index)
    brr[i]=ele;
    else if(i>index) 
    brr[i]=arr[i-1];
    else
    brr[i]=arr[i];
    for(int i=0;i<size;i++)
    printf("%d ",brr[i]);
    return 0;
}
