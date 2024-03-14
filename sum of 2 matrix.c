#include<stdio.h>
int main()
{
    int m,n,p,q;
    scanf("%d%d%d%d",&m,&n,&p,&q);
    int mat1[m][n], mat2[p][q];
    if(m==p && n==q)
    {
        int mat1[m][n],mat2[p][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&mat1[i][j]);
            }
        }
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    int out[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            out[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("%d ",out[i][j]);
        }
        printf("\n");
    }
    }
return 0;
}
   
