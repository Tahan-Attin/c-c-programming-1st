#include<stdio.h>
int main ()
{
int n;
scanf("%d",&n);
printf("%d",n);
int x1=n%100;
int x2=n/100;
printf("\n%d nota(s) de R$ 100,00\n",x2);
int x3=x1%50;
int x4=x1/50;
printf("%d nota(s) de R$ 50,00\n",x4);
int x5=x3%20;
int x6=x3/20;
printf("%d nota(s) de R$ 20,00\n",x6);
int x7=x5%10;
int x8=x5/10;
printf("%d nota(s) de R$ 10,00\n",x8);
int x9=x7%5;
int x10=x7/5;
printf("%d nota(s) de R$ 5,00\n",x10);
int x11=x9%2;
int x12=x9/2;
printf("%d nota(s) de R$ 2,00\n",x12);
int x13=x11%1;
int x14=x11/1;
printf("%d nota(s) de R$ 1,00\n",x14);
return 0;
}
