#include<stdio.h>
int main ()
{
    int m,n;
    printf("enter the value of row and coloum");
    scanf("%d%d",&m,&n);
    int a[m][n],i,j,sum=0;
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
       }
    }
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
      {
        if(a[i][j]%4==0||a[i][j]%7==0)
        {

            printf("%d ",a[i][j]);
            sum=sum+a[i][j];
        }
      }
      printf("\n");
    }
    printf("sum of those number %d ",sum);
    return 0;

}
