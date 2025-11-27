#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter number:");
    scanf("%d %d",&a,&b);
    int s;
    if(a>b)
    {
        s=b;
    }
    else {
        s=a;
    }
    while(s>=1) {
        if(a%s==0 && b%s==0)
        {
            printf("HCF=%d",s);

            break;
        }
        s--;
    }
}