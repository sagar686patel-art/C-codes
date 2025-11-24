#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three sides:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("Triangle is equilateral.");
    }
    else if(a==b || b==c || a==c)
    {
        printf("Triangle is isosceles.");
    }
    else
    {
        printf("Triangle is scalene.");
    }
}