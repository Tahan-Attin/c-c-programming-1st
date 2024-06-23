#include<stdio.h>
int main ()
{
    double x1,x2,y1,y2,d,e,b;
    scanf("%lf%lf",&x1,&y1);
    scanf("%lf%lf",&x2,&y2);
    d=(x1-x2);
    e=(y1-y2);
    b=sqrt( d*d+e*e);
    printf("%.4lf\n",b);
    return 0;
}
