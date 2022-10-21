#include<stdio.h>
#include<conio.h>
int main()
{
    int x,sum;
    scanf("%d",&x);
    sum=x/100+x/10%10+x%10;
    printf("%d",sum);
}
or
#include<stdio.h>
int main()
{
int x,sum;
printf("enter a numbr:");
scanf("%d",&x);
while(x)
{
sum=sum+x%10;
x=x/10;
printf("sum of digit is %d",sum);
}
