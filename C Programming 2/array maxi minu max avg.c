#include<stdio.h>
int main ()
{
    int n,i;
    float a[10],b[10],j,max,min,sum=0,avg;
    printf("enter array size");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]",i);
        scanf("%f",&a[i]);
    }
      max=a[0];
     min=a[0];
    for(i=0;i<n;i++)
    {
        printf("%.2f ",a[i]);
        if (a[i]>max)
        {
            max=a[i];
        }
        else if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("\n");
    printf(" maximum number is %.2f\n",max);
    printf(" minimum number is %.2f\n",min);
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    printf(" avrage number is %.2f",avg);
    return 0;

}
