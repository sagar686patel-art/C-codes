#include<stdio.h>
int main()
{
    int i,x,n;
    printf("Enter number:");
    scanf("%d",&i);
    int cnt=0;
    for(x=0;i>0;x++)
    {
     n=i%10;
     cnt=cnt*10+n;
     i=i/10;
    }
    printf("%d",cnt);
}