#include<stdio.h>
#include<math.h>
int main ()

{
    int n,r,c=0,temp,sum=0;
    printf("enter anay number");
    scanf("%d",&n);
    temp=n;
    while (temp!=0)

    {
        temp=temp/10;
        c++;
    }
temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum= sum+pow(r,c);
        temp=temp/10;
    }
    if(sum==n)
        printf("this is armastrong number");
    else
        printf("not a armastrong number");
    return 0;
}
