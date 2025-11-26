#include<stdio.h>
int main()
{
    int fac=1;
    int i;
    int n=1;
    int even=1,odd=1;
    printf("Enter number:");
    scanf("%d",&i);
    while(n<=i) {


        if(n%2==0)
        {
            even*=n;
        }
        else {
            odd*=n;
        }



        n+=1;

    }
    printf("Even factorial of %d: %d\nOdd factorial of %d: %d",i,even,i,odd);
}