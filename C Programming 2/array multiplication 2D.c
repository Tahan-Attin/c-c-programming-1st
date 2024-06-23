#include<stdio.h>
int main ()
{
    int a[100][100],b[100][100],c[100][100],i,j,k,c1,c2,r1,r2,sum=0;
    printf("enter the value of r1,c1");
    scanf("%d%d",&r1,&c1);
    printf("enter the value of r2,c2");
    scanf("%d%d",&r2,&c2);
    while(c1!=r2)
    {
        printf("enter the valu of r1,c1");
        scanf("%d%d\n",&r1,&c1);
        printf("enter the value of r2,c2");
        scanf("%d%d\n",&r2,&c2);
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("a[%d]b[%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("b[%d]b[%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");

    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }
    printf("\n");
    printf("multipliclation of matrix is\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
           printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    getch();
}
