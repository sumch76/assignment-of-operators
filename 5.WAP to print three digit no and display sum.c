#include<stdio.h>
#include<conio.h>
int main()
{
    int x,sum;
    scanf("%d",&x);
    sum=x/100+x/10%10+x%10;
    printf("%d",sum);
}