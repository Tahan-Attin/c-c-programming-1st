#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x1 = n/3600;
    int x2 =n%3600 ;
    int x3 =x2/60 ;
    int x4= x2%60;
    printf("%d:%d:%d",x1,x3,x4);
    return 0;
}
