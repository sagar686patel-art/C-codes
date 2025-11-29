#include<stdio.h>
int main()
{
    int x=0;
    int i=2;
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    while(i<=n) {
        x+=i;
        i+=2;
    }
    printf("Sum is %d",x);
}