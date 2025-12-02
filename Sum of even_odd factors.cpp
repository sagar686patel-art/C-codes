#include<stdio.h>
int main()
{
    int n,e=0,o=0;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
                if(i%2==0)
                   {
                    e+=i;
            }
            else
            {
                o+=i;
            }
        }
    }
    printf("Sum of even factors: %d\nSum of odd factors: %d",e,o);

}

