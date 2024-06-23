#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int x1=n/365;
    int x2=n%365;
    int x3=x2/30;
    int x4=x2%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)",x1,x3,x4);
    return 0;
}
