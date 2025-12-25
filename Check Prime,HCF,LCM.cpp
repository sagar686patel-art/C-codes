#include<stdio.h>
void prime(int n) {
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            printf("Not prime");
            return ;
        }

    } 
    printf("Prime");
    return;


}
int lcm(int x, int y)
{
    for(int i=1; i<=x*y; i++)
    {
        if(i%x==0 && i%y==0)
        {
            return i;
        }
    }
}
int hcf(int x, int y)
{
    int s;
    if(x>y)
    {
        s=x;
    }
    else
    {
        s=y;
    }
    for(int i=s; i>=1; i--)
    {
        if(x%i==0 && y%i==0)
        {
            return i;
        }
    }
}
int main()
{
    int x,y,lm,hf;
    printf("Enter numbers: ");
    scanf("%d%d",&x,&y);
    prime(x);
    printf("\n");
    prime(y);
    lm=lcm(x,y);
    printf("\n%d",lm);
    hf=hcf(x,y);
    printf("\n%d",hf);
}