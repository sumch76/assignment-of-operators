#include<stdio.h>
int main()
{
     int x;
     printf("enter a number");
     scanf("%d",&x);
     x=x>>1;
     printf("%d",x);
     return 0;
}