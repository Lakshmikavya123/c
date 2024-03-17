#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int val=1;
    for(int row=1;row<=n;row++)
    {
        
        for(int col=1;col<=n;col++)
        {
        printf("%02d",val++);
        }
        printf("\n");
    }
    return 0;
}
