#include<stdio.h>
int main()
{
    int n,i,x=0,s;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=0; n>0; i++)
    {
        s=n%10;
        x=x+s;
        n=n/10;
    }
    printf("Sum of digits: %d",x);
}


