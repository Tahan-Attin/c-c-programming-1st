#include<stdio.h>
int main ()
{
    int x,y;
    double z;
    scanf("%d%d",&x,&y);
    z=y/12.0*x;
    printf("%.3lf\n",z);
    return 0;
}
