#include<stdio.h>
int main()
{
    int quantity,ppu;
    float ta;
    printf("Enter quantity:");
    scanf("%d",&quantity);
    printf("Enter price per unit:");
    scanf("%d",&ppu);
    if(quantity>100)
    {
        ta=quantity*ppu-(quantity*ppu*0.1);
        printf("Your total amount is Rs.%.2f",ta);
    }
    else
    {
        ta=quantity*ppu;
        printf("Your total amount is Rs.%.2f",ta);
    }
}