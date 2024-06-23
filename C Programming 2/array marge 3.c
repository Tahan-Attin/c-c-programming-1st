#include<stdio.h>
int main()
{
    int i=0,j=0,l,k=0,a3[50],z,m,n;
    printf("enter the value of m,n");
    scanf("%d%d",&m,&n);
    z=m+n;

  int a1[]={1,3,4,5,2,7};
  int a2[]={11,12,13,14,15,16};
        while(j<m&&k<n)
        {
            if(a1[j]<a2[k])
            {
                a3[l]=a1[j];
                j++;
                l++;
            }


    else
    {
        a1[l]=a2[k];
        l++;
        k++;
    }
    }
    while (j<m)
    {
        a3[l]=a1[j];
        k++;
        j++;
    }
    while (k<m)
        a3[l]=a2[k];
        k++;
        l++;
    for(i=0;i<m+n;i++)
    {
        printf("%d",a3[i]);

    }
    return 0;
}
