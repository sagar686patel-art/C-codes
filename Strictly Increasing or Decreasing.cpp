#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d​%d%d",&a,&b,&c);
    if(a>b && b>c)
    {
        printf("Strictly Decreasing.");
    }
    else if(a<b && b<c)
    {
        printf("Strictly Increasing.");
    }
    else
    {
        printf("Invalid Input.");
    }
}