#include<stdio.h>
int main()
{
    int cp,sp,fa;
    printf("Enter cost price:");
    scanf("%d",&cp);
    printf("\nEnter selling price:");
    scanf("%d",&sp);
    fa=cp-sp;
    if(fa<0)
    {
        printf("\nProfit of Rs.%d",fa);
    }
    else
    {
        printf("\nLoss of Rs.%d",fa);
    }
}