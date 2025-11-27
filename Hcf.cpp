#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter number:");
    scanf("%d %d",&a,&b);
    int l=1,hcf,s;
    if(a>b)
    {
        s=b;
    }
    else {
        s=a;
    }
    while(l<=s) {
        if(a%l==0 && b%l==0)
        {   hcf=l;
        }


        l++;

    }
     printf("HCF=%d",hcf);
}