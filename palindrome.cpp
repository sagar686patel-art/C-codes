#include<stdio.h>
int main()
{
    int i,x;
    printf("Enter number:");
    scanf("%d",&i);
    int s=i;
    int cnt=0;
    
    while(i>0) {

        x=i%10;
        i=i/10;
        cnt=cnt*10+x;
    }


    if(s==cnt)
    {
        printf("%d is pallindrome.",s);
    }
    else
    {
        printf("%d is not pallindrome.",s);
    }
}