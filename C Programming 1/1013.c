#include<stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>c&&a>b)
    {
        printf("%d eh o maior",a);
    }
    else if(b>a&&b>c)
    {
        printf("%d eh o maior ",b);
    }
    else if(c>a&&c>b)
    {
        printf("%d eh o maior",c);
    }
    printf("\n");

    return 0;



}
