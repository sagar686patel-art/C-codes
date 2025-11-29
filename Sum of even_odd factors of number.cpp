#include<stdio.h>
int main()
{
    int fac=1;
    int i;
    int n=1;
    int even=0,odd=0;
    printf("Enter number:");
    scanf("%d",&i);
    while(n<=i) {
        if(i%n==0)
        {
            if(n%2==0)
            {
                even+=n;
            }
            else {
                odd+=n;
            }


        }
        n+=1;

    }
    printf("Sum of even factors of %d: %d\nSum of odd factors of %d: %d",i,even,i,odd);
}