#include<stdio.h>
int main()
{
    int n,i,x,s;
    printf("Enter number: ");
    scanf("%d %d",&n,&x);
    if(n>x)
    s=n;
    else
    s=x;
    for(i=s; i<=(n*x); i++)
    {
     if(i%n==0 && i%x==0)
     {
     printf("LCM= %d",i);
     break;
     }
    } 
}


